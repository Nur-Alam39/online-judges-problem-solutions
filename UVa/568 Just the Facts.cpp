#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(scanf("%d",&n)==1)
    {
        if(n==0)
            printf("%5d -> 1\n",n);
        else
        {
            printf("%5d -> ",n);
            int a[11000];
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
            cout<<m<<endl;
            for(i=0;; i++)
            {
                if(a[i]!=0)
                {
                    printf("%d\n",a[i]);
                    break;
                }
            }
        }
    }
    return 0;
}


