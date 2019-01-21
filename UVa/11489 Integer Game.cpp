#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,ct=1;
    char a[1010];
    scanf("%d",&n);
    getchar();
    while(scanf("%s",&a)==1)
    {
        int s=1,t=1,j=1,sum=0,f[10]= {0},d,len=strlen(a);
        for(int i=0; a[i]; i++)
            d=a[i]-'0',sum+=d,f[d]++;
        while(len)
        {
            int y=0;
            for(int i=1; i<10; i++)
            {
                if((sum-i)%3==0)
                {
                    f[i]--,len--,j++;
                    sum-=i;
                    if(j%2!=0)s=0;
                    else t=0;
                    y=1;
                    break;
                }
            }
            if(y==0)
            {
                if(j%2!=0)t=0;
                else s=0;
                break;
            }
        }
        if(s==0)
            printf("Case %d: S\n",ct++);
        else
            printf("Case %d: T\n",ct++);
    }
    return 0;
}
