#include<bits/stdc++.h>
int main()
{
    int n;
    long int n2,i,j,k;
    scanf("%d",&n);
    n2=n*n;
    long int a[n2],s=1,e=n2;
    for(long int i=1; i<=n2; i++)
        a[i]=i;
    for(k=1; k<=n; k++)
    {
        int c=0;
        for(i=s; ; i++)
        {
            printf("%ld",a[i]);
            c++;
            s++;
            if(c==n/2)
            {
                c=0;
                break;
            }
            else
                printf(" ");
        }
        for(j=e-n/2+1; ; j++)
        {
            c++;
            if(c<=n/2)
                printf(" ");
            printf("%ld",a[j]);
            e--;
            if(c==n/2)
            {
                c=0;
                break;
            }
        }
        printf("\n");
    }
    return 0;
}
