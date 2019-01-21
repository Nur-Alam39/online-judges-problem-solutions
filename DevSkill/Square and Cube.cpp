#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,n;
    scanf("%d",&tc);
    while(tc--)
    {
        scanf("%d",&n);
        int s,c,st=0,ct=0;
        s=sqrt(n);
        c=cbrt(n);
        if(s*s==n)st=1;
        if(c*c*c==n)ct=1;
        if(st&&ct)printf("Both\n");
        else if(st)printf("Perfect Square\n");
        else if(ct)printf("Perfect Cube\n");
        else printf("None\n");
    }
    return 0;
}
