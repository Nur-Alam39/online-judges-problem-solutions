#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    scanf("%d",&tc);
    while(tc--)
    {
        int a,b,c,s;
        scanf("%d%d%d",&a,&b,&c);
        s=(a* 10) + (b* 50) + (c * 100);
        printf("%d\n",s);
    }
    return 0;
}

