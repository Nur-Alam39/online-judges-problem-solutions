#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    if(n==1)
        printf("1\n1");
    else if(n==2)
        printf("1\n1 1");
    else
    {
        printf("2\n");
        int dif[n+2],c[n+2];
        memset(dif,0,sizeof(dif));
        memset(c,2,sizeof(c));
        for(int i=2; i*i<=n+1; i++)
            if(dif[i]==0)
                for(int j=i*2; j<=n+1; j+=i)
                    dif[j]=1,c[j]=1;
        for(int i=2; i<=n+1; i++)
            if(!dif[i])
                c[i]=2;
        for(int i=2; i<=n; i++)
            printf("%d ",c[i]);
        printf("1");
    }
    return 0;
}
