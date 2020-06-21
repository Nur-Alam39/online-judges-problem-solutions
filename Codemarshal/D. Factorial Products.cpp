#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,c;
    while(scanf("%d%d",&n,&m)==2)
    {
        c=1;
        if(n==0&&m==0)
            break;
        int a[n],b[m],fp[10],sp[10];
        for(int i=0; i<10; i++)
            fp[i]=0,sp[i]=0;
        for(int i=0; i<n; i++)
            scanf("%d",&a[i]);
        for(int i=0; i<m; i++)
            scanf("%d",&b[i]);
        for(int i=0; i<n; i++)
            for(int j=1; j<=a[i]; j++)
                fp[j]++;
        for(int i=0; i<m; i++)
            for(int j=1; j<=b[i]; j++)
                sp[j]++;

        fp[2]+=fp[4]*2;
        fp[2]+=fp[8]*3;
        fp[2]+=fp[6];
        fp[3]+=fp[6];
        fp[3]+=fp[9]*2;

        sp[2]+=sp[4]*2;
        sp[2]+=sp[8]*3;
        sp[2]+=sp[6];
        sp[3]+=sp[6];
        sp[3]+=sp[9]*2;

        if((fp[2]==sp[2])&&(fp[3]==sp[3])&&(fp[5]==sp[5])&&(fp[7]==sp[7]))
            {
                printf("YES\n");
                c=0;
            }
        if(c==1)
            printf("NO\n");
    }
    return 0;
}
