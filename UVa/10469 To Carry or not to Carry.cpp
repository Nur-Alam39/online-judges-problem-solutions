#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    while(scanf("%d%d",&a,&b)!=EOF)
    {
        int x[32],y[32],z[32],i=31,k=0,sum=0;
        memset(x,0,sizeof(x)),memset(y,0,sizeof(y)),memset(z,0,sizeof(z));
        while(a!=0)
            x[i--]=a%2,a/=2;
        i=31;
        while(b!=0)
            y[i--]=b%2,b/=2;
        for(int i=31; i>=0; i--)
            z[i]=x[i]^y[i];
        for(int i=31; i>=0; i--,k++)
            sum+=z[i]*pow(2,k);
        printf("%d\n",sum);
    }
    return 0;
}
