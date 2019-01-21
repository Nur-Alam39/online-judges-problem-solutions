#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,a,b,x;
    scanf("%d",&tc);
    while(tc--)
    {
        scanf("%d",&x);
        a=x%3;
        b=x%7;
        if(a==0||b==0||b==3||b==6){printf("YES\n");continue;}
        else printf("NO\n");
    }
    return 0;
}
