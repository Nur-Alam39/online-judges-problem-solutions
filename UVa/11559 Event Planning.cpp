#include<bits/stdc++.h>
using namespace std;
int main()
{
    int p,ba,h,w;
    while(scanf("%d%d%d%d",&p,&ba,&h,&w))
    {
        int tk,a,i,j,m=0;
        vector<int>b;
        for(i=1;i<=h;i++)
        {
            scanf("%d",&tk);
            for(j=0;j<w;j++)
                {
                    scanf("%d",&a);
                    if(a>=p)
                            b.push_back(p*tk);
                }
        }
        sort(b.begin(),b.end());
        if(b[0]<=ba)
            printf("%d\n",b[0]);
        else
            printf("stay home\n");
    }
    return 0;
}
