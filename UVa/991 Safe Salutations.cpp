#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,catalan[12],b_l=0;
    catalan[0]=catalan[1]=1;
    for(int i=2;i<=12;i++)
    {
        catalan[i]=0;
        for(int j=0;j<i;j++)
          catalan[i]+=catalan[j]*catalan[i-j-1];
    }
    while(scanf("%d",&n)==1)
        {
            if(b_l==1)
                printf("\n");
            b_l=1;
            printf("%d\n",catalan[n]);
        }
    return 0;
}
