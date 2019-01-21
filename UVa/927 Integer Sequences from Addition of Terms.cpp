#include<bits/stdc++.h>
#define lli long long int
using namespace std;
int main()
{
    int tc;
    scanf("%d",&tc);
    while(tc--)
    {
        int n,d,k;
        scanf("%d",&n);
        vector<int>c;
        lli a=0;
        for(int i=0; i<=n; i++,)
        {
            scanf("%d",&d);
            c.push_back(d);
        }
        scanf("%d%d",&d,&k);
        n=c.size();
        int p=0;
        for(int i=0; i<n; i++,p++)
        {
            printf("%d ",c[i]);
            a+=c[i]*pow(n,p);
        }
        p=0;
        int i;
        for(i=1;;i++)
        {
            p+=i*d;
            if(p>=k){break;}
        }
        printf("%d\n",i);
    }
    return 0;
}
