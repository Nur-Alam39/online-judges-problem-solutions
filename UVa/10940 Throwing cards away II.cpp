#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("out.txt","w",stdout);
    int n,p[20];
    for(int j=0,i=4; i<=500000; i+=i,j++)p[j]=i;
    //for(int i=0; i<17; i++)printf("%d %d\n",i,p[i]);
    while(scanf("%d",&n)&&n)
    {
        if(n==1)printf("1\n");
        else if(n==2||n==3)printf("2\n");
        else if(n==4)printf("4\n");
        else
        {
            int j,k;
            if(n>p[16])
            {
                for(k=0,j=p[16]+1; j<=n; j++,k++);
                printf("%d\n",2*k);
            }
            else
            {
                for(int i=1; i<17; i++)
                {
                    if(n>p[i-1]&&n<=p[i])
                    {
                        for(k=0,j=p[i-1]+1; j<=n; j++,k++);
                        printf("%d\n",2*k);
                        break;
                    }
                }
            }
        }
    }
    return 0;
}
