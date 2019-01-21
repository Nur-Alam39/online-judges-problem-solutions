#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    while( getline(cin,a))
    {
        map<char,int>m;
        map<char,int>::iterator it;
        int mx=-100;
        for(int i=0; i<a.size(); i++)
        {
            if((a[i]>=65&&a[i]<=90)||(a[i]>=97&&a[i]<=122))
            {
                m[a[i]]++;
                if(m[a[i]]>mx)mx=m[a[i]];
            }
        }
        for(it=m.begin(); it!=m.end(); it++)if(it->second==mx)cout<<it->first;
        printf(" %d\n",mx);
    }
    return 0;
}

