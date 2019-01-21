#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long int ulli;
ulli catalan[1001];
void get_catalan()
{
    catalan[0]=catalan[1]=1;
    for(int i=2;i<=1000;i++)
    {
        catalan[i]=0;
        for(int j=0;j<i;j++)
            catalan[i]+=catalan[j]*catalan[i-j-1];
    }
}
int main()
{
    get_catalan();
    int n;
    while(scanf("%d",&n)==1)
    {
        printf("%llu\n",catalan[n]);
    }
    return 0;
}
