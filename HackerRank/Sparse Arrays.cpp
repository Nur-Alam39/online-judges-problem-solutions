#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string,int>m;
    int n;
    string x;
    scanf("%d",&n);
    cin.ignore();
    while(n--)
    {
        getline(cin,x);
        m[x]++;
    }
    int q;
    scanf("%d",&q);
    cin.ignore();
    while(q--)
    {
        getline(cin,x);
        cout<<m[x]<<endl;
    }
    return 0;
}
