#include<bits/stdc++.h>
using namespace std;
char a[10000][100000];
int main()
{
    int tc,c=1,h,w;
    scanf("%d",&tc);
    while(tc--)
    {
        scanf("%d%d",&h,&w);
        for(int i=0; i<h; i++)
            scanf("%s",&a[i]);
    }
    return 0;
}
