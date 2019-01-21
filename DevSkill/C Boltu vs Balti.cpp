#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,cs=1,n;
    scanf("%d",&tc);
    while(tc--)
    {
        scanf("%d",&n);
        if(n==1||n==3)printf("Case %d-> YES;\n",cs++);
        else printf("Case %d-> NO;\n",cs++);
    }
    return 0;
}

