#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long int ulli;
int main()
{
    int n,m;
    while(scanf("%d%d",&n,&m)==2)
    {
        if(m==0&&n==0)break;
        ulli u=1;
        int g=max(n-m,m);
        int d=min(n-m,m);
        int a[d+1];
        for(int l=1; l<=d; l++)a[l]=l;
        for(int i=n; i>g; i--)
        {

            u*=i;
            for(int j=1; j<=d; j++)
                if(a[j])
                    if(u%a[j]==0)
                    {
                        u/=a[j],a[j]=0;
                    }
        }
        printf("%d things taken %d at a time is %llu exactly.\n",n,m,u);
    }
    return 0;
}
