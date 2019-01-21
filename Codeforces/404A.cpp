#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,f=0;
    scanf("%d",&n);
    char c[20];
    getchar();
    while(n--)
    {
        scanf("%s",&c);
        if(c[0]=='T')
            f+=4;
        else if(c[0]=='C')
            f+=6;
        else if(c[0]=='O')
            f+=8;
        else if(c[0]=='D')
            f+=12;
        else if(c[0]=='I')
            f+=20;
    }
    printf("%d",f);
    return 0;
}
