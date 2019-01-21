#include<bits/stdc++.h>
using namespace std;
bool compare1(const pair<long int,long int>&i, const pair<long int,long int>&j)
{
    return i.second <j.second;
}
long int ad(long int n)
{
    long long int sum=0;
    for(long int i=1; i<=n/2; i++)
        if(n%i==0)
            sum+=i;
    if(sum>n)
        return sum-n;
    else
        return 0;
}
int main()
{
    int tc;
    scanf("%d",&tc);
    while(tc--)
    {
        int n;
        scanf("%d",&n);
        long int a[n],ab;
        vector<pair<long int,long int> >na;
        for(int i=0; i<n; i++)
        {
            scanf("%ld",&a[i]);
            na.push_back(make_pair(a[i],ad(a[i])));
        }
        sort(na.begin(),na.end(),compare1);
        if(na[n-1].second!=0)
        {
            long int m=na[n-1].first,v=na[n-1].second;
            for(int i=n-1; i>=0; i--)
            {
                if(na[i].second==na[i-1].second)
                {
                    m=min(m,na[i-1].first);
                    v=na[i].second;
                }
                else if(na[i].second!=na[i-1].second)
                    break;
            }
            printf("%ld %ld\n",m,v);
        }
        else if(na[n-1].second==0)
            printf("-1\n");
    }
    return 0;
}

