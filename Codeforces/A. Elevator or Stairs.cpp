#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,z,t1,t2,t3;
    scanf("%d%d%d%d%d%d",&x,&y,&z,&t1,&t2,&t3);
    int a=abs(x-y)*t1;
    int b=abs(x-z)*t2+3*t3+abs(x-y)*t2;
    if(a>=b)printf("YES");
    else printf("NO");
    return 0;
}
