#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(scanf("%d",&n)&&n>0)
    {
        int s=sqrt(n)+1,pos,f,d,r,ans=0;
        for(int i=s;i>=2;i--)
        {
            f=n,pos=1;
            for(int j=i;j>=1;j--)
            {
                d=f/i,r=f%i;
                if(r==1)f-=(d+1);
                else{
                    pos=0;
                    break;
                }
            }
            if(pos)
                if(f%i==0){
                    ans=i;
                    break;
                }
        }
        printf("%d coconuts, ",n);
        if(pos&&ans)printf("%d people and 1 monkey\n",ans);
        else printf("no solution\n");
    }
    return 0;
}
