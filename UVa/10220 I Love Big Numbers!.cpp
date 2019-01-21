#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(scanf("%d",&n))
    {
        int a[5000],x,i,j,m=1,carry=0,sum=0;
        a[0]=1;
        for(i=1; i<=n; i++)
        {
            for(j=0; j<m; j++)
            {
                x=a[j]*i+carry;
                a[j]=x%10;
                carry=x/10;
            }
            while(carry)
            {
                a[m]=carry%10;;
                carry=carry/10;
                m++;
            }
        }
        for(i=0; i<m; i++)
            sum+=a[i];
        printf("%d\n",sum);
    }
    return 0;
}
