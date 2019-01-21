#include<bits/stdc++.h>
/*
    printf("");
    scanf("%d",&);
*/
using namespace std;
int main()
{
    long long int s=109;
    int i=2,k;
    scanf("%d",&k);
    int in[10]={10,9,8,7,6,5,4,3,2};
    int l=0,m=1;
    for(;;)
    {
        for(int j=1;j<=in[l]&&i<=k;j++,i++)
          {
              s+=9;
              printf("%lld ",s);
          }
          if(i<k)
          {
              s+=9*m;printf("%lld ",s);
              i++;
              m++;
          }
          l++;
          if(l==8)l=0;
    }
    printf("%lld",s);
    return 0;
}

