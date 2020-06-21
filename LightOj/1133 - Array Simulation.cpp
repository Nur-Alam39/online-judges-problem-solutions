#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,cs=1;
    scanf("%d",&tc);
    while(tc--)
    {
        int n,m,d,k,y,z;
        scanf("%d%d",&n,&m);
        int a[n];
        char op;
        for(int i=0; i<n; i++)scanf("%d",&a[i]);
        while(m--)
        {
            scanf("%c",&op);
            if(op=='S')
            {
                scanf("%d",&d);
                printf("op=%c  d=%d\n",op,d);
                for(int i=0; i<n; i++)a[i]+=d;
                 for(int i=0; i<n; i++)printf("%d ",a[i]);
            }
            else if(op=='M')
            {
                scanf("%d",&d);
                printf("op=%c  d=%d\n",op,d);
                for(int i=0; i<n; i++)a[i]*=d; for(int i=0; i<n; i++)printf("%d ",a[i]);
            }
            else if(op=='D')
            {
                scanf("%d",&k);

                printf("op=%c  k=%d\n",op,k);
                for(int i=0; i<n; i++)a[i]/=k; for(int i=0; i<n; i++)printf("%d ",a[i]);

            }
            else if(op=='R')
            {
                printf("op=%c\n",op);
                for(int i=0,j=n-1; i<=j; i++,j--)swap(a[i],a[j]); for(int i=0; i<n; i++)printf("%d ",a[i]);

            }
            else if(op=='P')
            {
                scanf("%d%d",&y,&z);printf("%c %d %d\n",op,y,z) ;for(int i=0; i<n; i++)printf("%d ",a[i]);
                swap(a[y],a[z]);
            }
            printf("\n");
            cin.ignore();
        }
        printf("Case %d:\n",cs++);
        for(int i=0; i<n; i++)printf("%d ",a[i]);
    }

    return 0;
}

