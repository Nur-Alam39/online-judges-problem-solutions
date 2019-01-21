#include<bits/stdc++.h>
#define lli long long int
#define M 1000005
#define S 200005
using namespace std;
lli n,fr[M],a[S],sum;
vector<lli>ans;
int main()
{
    scanf("%I64d",&n);
    for(int i=1; i<=n; i++)
        scanf("%I64d",&a[i]);
    for(lli i=1; i<=n; i++)
        sum+=a[i],fr[a[i]]++;
    for(lli i=1; i<=n; i++)
    {
        sum-=a[i];
        fr[a[i]]-=1;
        if(sum%2==0)
        {
            lli d=sum/2;
            if(d<=M-5&&fr[d]>0)
                ans.push_back(i);
        }
        sum+=a[i];
        fr[a[i]]+=1;
    }
    int sz=ans.size();
    printf("%d\n",sz);
    for(int i=0; i<sz; i++)
        printf("%I64d ",ans[i]);
    return 0;
}

