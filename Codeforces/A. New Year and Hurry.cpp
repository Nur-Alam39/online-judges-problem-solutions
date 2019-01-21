#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,r,s,sum;
    scanf("%d%d",&n,&k);
    r=240-k,s=0,sum=0;
    for(int i=5;s<n;i+=5)
    {
        sum+=i;
        if(sum<=r)
          s++;
        else if(sum>r)
            break;
    }
    printf("%d",s);
    return 0;
}
