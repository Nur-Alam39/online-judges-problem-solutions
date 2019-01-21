#include<bits/stdc++.h>
#define lli long long int
#define mp make_pair
#define pb push_back
#define pii pair<int ,int>
using namespace std;
int main()
{
    int n,k1,k2;
    scanf("%d%d%d",&n,&k1,&k2);
    int a[n],b[n];
    vector<pair<long int,pii > >c;
    for(int i=0; i<n; i++)
        scanf("%d",&a[i]);
    for(int i=0; i<n; i++)
        scanf("%d",&b[i]);
    for(int i=0; i<n; i++)
        c.pb(mp(abs(a[i]-b[i]),mp(a[i],b[i])));
    sort(c.begin(),c.end());
    int k=k1+k2,d,ac=0;
    lli er=0;
    for(int i=n-1; i>=0; i--)
    {
        d=c[i].first-k;
        if(d==0)
            k=0,c[i].first=0;
        else if(d<0)
            k=-1*d,c[i].first=0;
        else
            k=0,c[i].first=d;
        er+=c[i].first*c[i].first;
        if(d==0||c[i].second.first==c[i].second.second)
            ac=1;
    }
    if(k)
        if(ac)
            if(k%2)
                k=1;
            else
                k=0;
    cout<<er+(k*k)<<endl;
    return 0;
}


