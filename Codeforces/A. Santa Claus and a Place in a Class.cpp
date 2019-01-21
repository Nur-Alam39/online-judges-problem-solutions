#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,k,c=0,g=1,i,p=0;
    scanf("%d%d%d",&n,&m,&k);
    if(k%2!=0)
    {
        for(i=1; i<=k; i+=2,c++,p++)
            if(c==m)
                c=0,g++;
        printf("%d %d L",g,c);
    }
    else
    {
        for(i=2; i<=k; i+=2,c++,p++)
            if(c==m)
                c=0,g++;
        printf("%d %d R",g,c);
    }
    return 0;
}
