#include<bits/stdc++.h>
#define lli long long int
using namespace std;
lli mx=-10000000000;
int n;
int main()
{
    scanf("%d",&n);
    lli sc[n];
    cin.ignore();
    map<string,lli> scr,srcf;
    string a[n];
    for(int i=0;i<n;i++)cin>>a[i]>>sc[i],scr[a[i]]+=sc[i];
    for(int i=0;i<n;i++)mx=max(mx,scr[a[i]]);
    for(int i=0;i<n;i++)
    {
        srcf[a[i]]+=sc[i];
        if(srcf[a[i]]>=mx&&scr[a[i]]>=mx)
            return cout<<a[i],0;
    }
    return 0;
}

