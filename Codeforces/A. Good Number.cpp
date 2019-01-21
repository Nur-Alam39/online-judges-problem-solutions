#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,k,c=0;
    cin>>n>>k;
    string a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        int s=a[i].size();
        sort(a[i].begin(),a[i].end());
    }
    for(int i=0; i<n; i++)
    {
        int s=a[i].size();
        if(s==k+1)
        {
            set<char>v;
            for(int j=0; j<s; j++)
                v.insert(a[i][j]);
            if(v.size()==s)
                c++;
        }
    }
    cout<<c;
    return 0;
}
