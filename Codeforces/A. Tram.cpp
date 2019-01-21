#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m=0,a,b,c=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d%d",&a,&b);
        c-=a;
        c+=b;
        m=max(m,c);
    }
    printf("%d",m);
    return 0;
}
