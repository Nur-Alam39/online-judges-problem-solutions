#include<bits/stdc++.h>
using namespace std;
int p,y,ans=-1;
bool ip(int n)
{
    int s=sqrt(n);
    for(int i=2;i<=s&&i<=p;i++)if(n%i==0)return false;
    return true;
}
int main()
{
    scanf("%d%d",&p,&y);
    for(int i=y; i>p; i--)
        if(ip(i))return printf("%d",i),0;
    return printf("%d",ans),0;
}

