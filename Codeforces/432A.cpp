#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,t;
    scanf("%d%d%d",&n,&k,&t);
    if(t<k)
        printf("%d",t);
    else if(t>=k&&t<=n)
        printf("%d",k);
    else printf("%d",k-(t-n));
    return 0;
}
