#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    int s[n],d[n];
    for(int i=0;i<n;i++)scanf("%d%d",&s[i],&d[i]);
    int cur=s[0],res;
    for(int i=1;i<n;i++)
    {
        for(int j=0;;j++)
        {
            res=s[i]+d[i]*j;
            if(res>cur)
            {
                cur=res;
                break;
            }
        }
    }
    printf("%d",cur);
    return 0;
}
