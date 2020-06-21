#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,c=1;
    scanf("%d",&tc);
    while(tc--)
    {
        int k;
        long int n,poor,r,re_ne,own,total;
        scanf("%d%ld",&k,&n);
        if(k==0)
        {
            poor=n/3;
            r=(poor*2)/3;
            re_ne=r*2;
            own=r;
            printf("Case %d:\n%d\n%d\n%d\n",c++,poor,re_ne,own);
        }
        else
        {
           re_ne=n*2;
           poor=(n*3)/2;
           total=poor*3;
           printf("Case %d:\n%d\n%d\n%d\n",c++,poor,re_ne,total);
        }
    }
    return 0;
}

