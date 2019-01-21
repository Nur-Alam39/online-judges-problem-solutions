#include<bits/stdc++.h>
#define  lli long long int
using namespace std;
int main()
{
    lli n,m,b1,c1;
    scanf("%I64d %I64d",&n,&m);
    b1=n;
    c1=n;
    char b[n],c[n];
    for(lli i=0; i<n; i++)
    {
        b[i]='0';
        c[i]='0';
    }
    int x,y;
    for(lli i=0; i<m; i++)
    {
        scanf("%d %d",&x,&y);
        x--;
        y--;
        if(b[x]=='0')
        {
            b[x]='1';
            b1--;
        }
        if(c[y]=='0')
        {
            c[y]='1';
            c1--;
        }
        printf("%I64d ",(b1*c1));
    }
    return 0;
}
