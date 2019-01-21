#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long int ulli;
ulli catalan[40];
void get_catalan()
{
    catalan[0]=catalan[1]=1;
    for(int i=2;i<=40;i++)
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
        for(int i=1;i<=40;i++)
        {
            if(n==catalan[i])
            {
                printf("%d\n",i);
                break;
            }
        }
    }
    return 0;
}
