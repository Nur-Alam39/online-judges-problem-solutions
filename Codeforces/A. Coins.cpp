#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,s;
    scanf("%d%d",&n,&s);
    int ans=s/n;
    if(s%n)ans++;
    printf("%d",ans);
    return 0;
}
