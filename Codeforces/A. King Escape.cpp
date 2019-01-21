#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    int ax,ay,bx,by,tx,ty;
    scanf("%d%d%d%d%d%d",&ax,&ay,&bx,&by,&tx,&ty);
    if((bx<ax&&by<ay)&&(tx<ax&&ty<ay))printf("YES");
    else if((bx<ax&&by>ay)&&(tx<ax&&ty>ay))printf("YES");
    else if((bx>ax&&by>ay)&&(tx>ax&&ty>ay))printf("YES");
    else if((bx>ax&&by<ay)&&(tx>ax&&ty<ay))printf("YES");
    else printf("NO");
    return 0;
}
