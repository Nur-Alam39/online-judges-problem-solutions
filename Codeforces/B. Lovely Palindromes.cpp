#include<bits/stdc++.h>

using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    string n;
    cin>>n;
    cout<<n;
    int l;
    l=n.size();
    for(int i=l-1; i>=0; i--)
        cout<<n.at(i);
    return 0;
}
