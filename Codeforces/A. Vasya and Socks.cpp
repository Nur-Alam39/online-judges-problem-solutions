#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,day=0;
    scanf("%d%d",&n,&m);
    day+=n;
    day+=n/m;
    if(day/m>0)
        day+=1;
    printf("%d",day);
    return 0;
}
