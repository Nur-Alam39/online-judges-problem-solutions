#include<bits/stdc++.h>
using namespace std;
int main()
{
    int p,q,y,ans;
    scanf("%d%d%d",&p,&q,&y);
    ans=(2*q)+(5*p);
    ans*=52;
    ans*=y;
    printf("%d\n",ans);
    return 0;
}
