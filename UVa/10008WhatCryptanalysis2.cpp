#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    cin.ignore();
    string a[n];
    map<char,int>mp;
    for(int i=0; i<n; i++)getline(cin,a[i]);
    for(int i=0; i<n; i++)
        for(int j=0; j<a[i].size(); j++)mp[a[i][j]]++;
    return 0;
}
