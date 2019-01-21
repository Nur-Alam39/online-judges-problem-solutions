#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("10815_in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string line;
    set<string>s;
    set<string>::iterator it;
    int l;
    while(getline(cin, line))
    {
        for(int i=0; i<line.size(); i+=l+1)
        {
            string a="";
            l=0;
            for(int j=i; ((line.at(j)>=65&&line.at(j)<=90)||(line.at(j)>=97&&line.at(j)<=122));j++)
            {
                if((line.at(j)>=65&&line.at(j)<=90))
                    line.at(j)=line.at(j)+32;
                a.push_back(line.at(j));
                l++;
            }
            s.insert(a);
        }
    }
    for(it=s.begin(); it!=s.end(); it++)
        cout<<*it<<endl;
    return 0;
}
