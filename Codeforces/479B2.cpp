#include<bits/stdc++.h>
using namespace std;
int n,mx=-10;
string a,x="",z="";
map<string,int> mp;
int main()
{
    cin>>n>>a;
    for(int i=1;i<a.size();i++)
        {
            x="",x+=a[i-1],x+=a[i],mp[x]++;
            if(mp[x]>mx)mx=mp[x],z=x;
        }
    return cout<<z,0;
}


