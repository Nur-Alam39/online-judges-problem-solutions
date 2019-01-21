#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,s,sn,k;
    scanf("%d",&n);
    sn=2*n;
    for(s=1; s<=sn; s++)
        printf(" ");
    sn-=2;
    printf("0\n");
    for(i=2; i<=n+1; i++)
    {
        for(s=1; s<=sn; s++)
            printf(" ");
        for(j=1; j<=i; j++)
        {
            if(j==1)
                printf("0");
            else
                printf("%d",j-1);
            if(j<=i)
                printf(" ");
        }
        if(i!=1)
            for(k=j-1-2; k>=0; k--)
            {
                printf("%d",k);
                if(k>0)
                    printf(" ");
            }
        printf("\n");
        sn-=2;
    }
    sn=2;
    for(i=n-2; i>=0; i--)
    {
        for(s=sn; s>=1; s--)
            printf(" ");
        for(j=0; j<=i+1; j++)
        {
            printf("%d",j);
            if(j<=i+1)
                printf(" ");
        }
        for(k=j-2; k>=0; k--)
        {
            printf("%d",k);
            if(k>0)
                printf(" ");
        }
        printf("\n");
        sn+=2;
    }
    for(s=sn; s>=1; s--)
            printf(" ");
    printf("0");
    return 0;
}

