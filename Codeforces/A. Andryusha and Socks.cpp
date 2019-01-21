#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    int s=n*2;
    int a,c[n+1],t=0,m=t;
    memset(c,0,sizeof(c));
    for(int i=0; i<s; i++)
    {
        scanf("%d",&a);
        if(c[a]==0)
          {
              c[a]++,t++;
          }
        else if(c[a]==1)
            t--;
        if(t>m)
            m=t;
    }
    printf("%d",m);
    return 0;
}
