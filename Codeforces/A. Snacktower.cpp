#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int n,i,j,k=1;
    scanf("%ld",&n);
    long int a[n+5];
    char b[n+5];
    for(i=1; i<=n; i++)
        scanf("%ld",&a[i]);
    for(i=1; i<=n; i++)
        b[i]='1';
    for(k=1; n!=0; k++)
    {
        if(a[k]==n)
        {
            n--;
            printf("%ld ",a[k]);
            for(i=a[k]-1;; i--,n--)
            {
                if(b[i]=='0')
                    printf("%ld ",i);
                else
                {
                    if(n>0)
                        printf("\n");
                    break;
                }
            }
        }
        else
        {
            b[a[k]]='0';
            printf("\n");
        }
    }
    return 0;
}
