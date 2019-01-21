#include<bits/stdc++.h>
using namespace std;
int main()
{
    int st,f,s,t,angle=0;
    while(scanf("%d%d%d%d",&st,&f,&s,&t))
    {
        if(st==0&&f==0&&s==0&&t==0)
            break;
        angle+=720+360;
        angle+=min(abs(st-f),abs(f-st))*9;
        angle+=min(abs(f-s),abs(s-f))*9;
        angle+=min(abs(s-t),abs(t-s))*9;
        printf("%d\n",angle);
    }
    return 0;
}

