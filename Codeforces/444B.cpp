#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,n1[10]={0},n2[10]={0},n3[10]={0};
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<6; j++)
        {
            scanf("%d",&a);
            if(i==0)n1[a]++;
            else if(i==1)n2[a]++;
            else if(i==2)n3[a]++;
        }
    }
    int x,f,s,t,nd,r;
    if(n==1)r=10;
    else if(n==2)r=100;
    else if(n==3)r=1000;
    for(int i=1; i<=r; i++)
    {
        x=i;
        if(x<10)f=x,nd=1;
        else if(x<100)s=x%10,f=x/10,nd=2;
        else if(x<1000)t=x%10,x/=10,s=x%10,f=x/10,nd=3;
        if(nd==1)
        {
            if(n1[f]||n2[f]||n3[f])continue;
            else return printf("%d",i-1),0;
        }
        else if(nd==2)
        {
            if(n1[f]&&(n2[s]||n3[s]))continue;
            else if(n2[f]&&(n1[s]||n3[s]))continue;
            else if(n3[f]&&(n1[s]||n2[s]))continue;
            else return printf("%d",i-1),0;
        }
        else if(nd==3)
        {
            if(n1[f]&&n2[s]&&n3[t])continue;
            else if(n1[f]&&n3[s]&&n2[t])continue;
            else if(n2[f]&&n1[s]&&n3[t])continue;
            else if(n2[f]&&n3[s]&&n1[t])continue;
            else if(n3[f]&&n1[s]&&n2[t])continue;
            else if(n3[f]&&n2[s]&&n1[t])continue;
            else return printf("%d",i-1),0;
        }
    }
    return 0;
}
