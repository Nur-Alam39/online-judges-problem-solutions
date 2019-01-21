#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,y=0;
    scanf("%d%d",&a,&b);
    while(1)
    {
        if(a>b)
            break;
        a*=3,b*=2,y++;
    }
    printf("%d",y);
    return 0;
}
