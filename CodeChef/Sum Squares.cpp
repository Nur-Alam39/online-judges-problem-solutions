#include<bits/stdc++.h>
#define li long int
#define M 100005
#define mod 1000000007
using namespace std;
li dif[M+1];
void solve()
{
    dif[1]=9;
    for(int i=2,j=5;i<=M+5;j+=2,i++)dif[i]=(dif[i-1]+j*j)%mod;
}
int main()
{
    solve();
    int tc,x,y;
    scanf("%d",&tc);
    while(tc--)
    {
        scanf("%d%d",&x,&y);
        printf("%ld\n",dif[y-1]-dif[x-1]);
    }
    return 0;
}

