#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    while(scanf("%d%d",&n,&k)&&n&&k)
    {
        vector<int>p;
        int j;
        for(int i=2; i<=n; i++)
        {
            for(j=2; j<i; j++)
                if(i%j==0)
                    break;
            if(j==i)
            {
                p.push_back(i);
                printf("%d ",i);
            }
        }
        for(int i=0;i<p.size();i++)
        {

        }
    }
    return 0;
}
