#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,b,s,g,r,a,i=0,m=-1000000000;
    scanf("%d",&n);
    for(int j=0; j<n; j++)
    {
        scanf("%d%d%d%d",&b,&s,&g,&r);
        a=b+(s*3)+(g*10)-(r*5);
        printf("Player %d:",j+1);
        if(a>=0)
            printf(" %d\n",a);
        else
            printf(" 0\n");
        m=max(m,a);
    }
    printf("High Score = %d\n",m);
    return 0;
}
