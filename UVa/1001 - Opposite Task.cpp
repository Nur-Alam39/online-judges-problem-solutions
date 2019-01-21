#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    int m[n],a,b,i,v[n];
    for(i=0; i<n; i++)
        scanf("%d",&m[i]);
    for(i=0; i<n; i++)
        v[i]=0;
    for(j=0; j<n; j++)
    {
        for(i=1; i<n; i++)
        {
            if(m[i]==m[j])
                    v[j]++;
        }
        if(v[j]==0)
            {
                a=m[j]-0;
                b=m[j]-a;
            }
            else if(v[j]==1)
            {
                a=m[j]-0;
                b=m[j]-a;
            }
            printf("%d %d\n",b,a);
            v[j]--;
    }
    return 0;
}

