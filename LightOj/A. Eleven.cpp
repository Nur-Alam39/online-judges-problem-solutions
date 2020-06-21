#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    int f[100];
    f[1]=1,f[2]=1;
    for(int i=3;;i++)
    {
        f[i]=f[i-1]+f[i-2];
        if(f[i]>=1000)break;
    }
    for(int k=2,j=1;j<=n;j++)
    {
        if(f[k]==j)printf("O"),k++;
        else printf("o");
    }
    return 0;
}
