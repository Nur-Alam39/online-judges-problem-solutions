#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        int a[5000];
        int i,j,m,x,carry=0;
        m=1;
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
                a[m]=carry%10;
                carry=carry/10;
                m++;
            }
        }
        cout<<n<<"!\n";
        for(i=m-1; i>=0; i--)
            printf("%d",a[i]);
        cout<<endl;
    }
    return 0;
}

