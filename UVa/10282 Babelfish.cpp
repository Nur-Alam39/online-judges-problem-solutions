#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("out.txt","w",stdout);
    string a,b,all;
    map<string,string>d;
    while(getline(cin,all),all.size())
    {
        stringstream n;
        n<<all;
        n>>a>>b;
        d[b]=a;
    }
    while(cin>>a)
    {
        if(d[a].size())
            cout<<d[a]<<endl;
        else
            cout<<"eh"<<endl;
    }
    return 0;
}

