#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,b,p,w=0,f=0,s=0,d;
    scanf("%d%d%d",&n,&b,&p);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&d);
        if(d==1)
            f++;
        else if(d==2)
            s++;
    }
    if(f-b>=0)
    {
        w+=f-b;
        b=0;
    }
    else if(f-b<0)
        b-=f;
    if(s-(p+b)>0)
        w+=s-(p+b);
    printf("%d",w);
    return 0;
}
