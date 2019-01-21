#include<bits/stdc++.h>
using namespace std;
vector<string>v;
int main()
{
    freopen("10815_in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s;
    while(cin>>s)
    {
        int i=0;
        while(i<s.size())
        {
            string tmp="";
                while((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z'))
                {
                    tmp+=tolower(s[i]);
                    i++;
                }
            if(tmp.size())
            v.push_back(tmp);
            i++;
        }

    }
    sort(v.begin(), v.end());
    cout<<v[0]<<"\n";
    for(int i=1; i<v.size(); i++)
        if(v[i]!=v[i-1])
            cout<<v[i]<<"\n";
    return 0;
}
