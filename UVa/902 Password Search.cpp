#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string a,s;
    while(cin>>n)
    {
        cin.ignore();
        getline(cin,a);
        map<string,int>m;
        for(int i=0; i<=a.size()-n; i++)s=a.substr(i,n),m[s]++;
        map<string,int>::iterator p;
        string ans;
        int z=-100;
        for(p= m.begin(); p!= m.end(); p++)
            if(p->second>z)z=p->second,ans=p->first;
        cout<<ans<<endl;
    }
    return 0;
}
