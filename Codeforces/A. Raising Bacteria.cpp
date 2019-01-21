#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int x;
    int ans=1,r;
    scanf("%ld",&x);
    r=x%2;
    if(r==0)
        printf("%d",ans);
    else
        printf("%d",ans+r);
    return 0;
}
