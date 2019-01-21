#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,x[4];
    scanf("%d%d%d",&a,&b,&c);
    x[0]=abs(a-b);
    x[1]=abs(a-c);
    x[2]=abs(b-c);
    sort(x,x+3);
    printf("%d",x[0]+x[1]);
    return 0;
}

