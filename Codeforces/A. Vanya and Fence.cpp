#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,h,a,walk=0;
    scanf("%d%d",&n,&h);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a);
        if(a<=h)
            walk++;
        else
            walk+=2;
    }
    printf("%d",walk);
    return 0;
}
