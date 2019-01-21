#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,f,ft1,ft2,x=0;
    scanf("%d%d",&n,&f);
    int fl[n+1],t[n];
    long int time=0;
    for(int i=0; i<n; i++)
        scanf("%d%d",&fl[i],&t[i]);
    if(fl[n-1]!=f)
        {
            fl[n]=f;
            x=1;
        }
    for(int i=0; i<n; i++)
    {
        if(x==1)
            ft2=fl[n-i]-fl[n-i-1];
        else
            ft2=fl[n-i-1]-fl[n-i-2];
        time+=ft2;
        if(x==1)
            ft1=t[n-i]-time;
        else
            ft1=t[n-i-1]-time;
        if(ft1<0)
            ft1=0;
        time+=ft1;
    }
    if(fl[0]!=0)
        time+=fl[0];
    printf("%ld",time);
    return 0;
}
