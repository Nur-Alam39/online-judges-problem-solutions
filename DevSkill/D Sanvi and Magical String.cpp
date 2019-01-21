#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,n;
    scanf("%d",&tc);
    while(tc--)
    {
        scanf("%d",&n);
        string a;
        cin>>a;
        map<char,int>mp;
        int l=a.size();
        for(int j=0; j<l; j++)mp[a[j]]++;
        int m=-100;
        map<char,int>::iterator it;
        for(it=mp.begin();it!=mp.end();it++)if(it->second>m)m=it->second;
        printf("%d\n",n-m);
    }
    return 0;
}


