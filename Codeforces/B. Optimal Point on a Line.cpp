#include<bits/stdc++.h>
using namespace std;
bool compare(const pair<long long int,long int>&i, const pair<long long int,long int>&j)
{
    return i.first < j.first;
}
int main()
{
    long int n;
    scanf("%ld",&n);
    long long int a[n],sum;
    for(long int i=0; i<n; i++)
        scanf("%lld",&a[i]);
    sort(a,a+n);
    long int mid;
    mid=n/2;
    vector<pair<long long int,long int> > d;
    for(long int i=mid-2; i<=mid+2; i++)
    {
        sum=0;
        for(long int j=0; j<n; j++)
            sum+=abs(a[i]-a[j]);
        d.push_back(make_pair(sum,a[i]));
    }
    sort(d.begin(),d.end(),compare);
    cout<<d[0].second;
}
