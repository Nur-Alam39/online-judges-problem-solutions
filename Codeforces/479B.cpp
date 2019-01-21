#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,mx=-10;
    string a,x="",z="";
    cin>>n>>a;
    map<string,int> mp;
    for(int i=1;i<a.size();i++)
        x="",x+=a[i-1],x+=a[i],mp[x]++;
    map<string,int> :: iterator itr;
    for(itr=mp.begin();itr!=mp.end();itr++)
        if(itr->second>mx)mx=itr->second,z=itr->first;
    cout<<z;
    return 0;
}

