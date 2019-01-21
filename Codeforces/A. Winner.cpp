#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define Int Int()
#define msi map<string,int>
using namespace std;
int Int{int n;scanf("%d",&n);return n;}
msi m;
msi::iterator it;
vector<pair<string,int> >ans;
int main()
{
    char name[40];
    int n=Int,score,mx=INT_MIN;
    for(int i=0; i<n; i++)
    {
        scanf("%s%d",&name,&score);
        m[name]+=score,ans.pb(mp(name,m[name]));
    }
    for(it=m.begin(); it!=m.end(); it++)mx=max(mx,it->S);
    for(int i=0; i<n; i++)if(ans[i].S>=mx)return cout<<ans[i].F,0;
}
