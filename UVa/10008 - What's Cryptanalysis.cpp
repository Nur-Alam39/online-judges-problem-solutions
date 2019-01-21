#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string a;
    map<char,int>m;
     map<char,int>::iterator p;
    cin>>n;
    cin.ignore();
    while(n--)
    {
        getline(cin,a);
        for(int i=0; i<a.size(); i++)
        {
            if((a[i]>=65&&a[i]<=90)||(a[i]>=97&&a[i]<=122))
            {
                if(a[i]>=97&&a[i]<=122)
                {
                    a[i]-=32;
                    m[a[i]]++;
                }
            }
        }
    }
    sort(m.begin(),m.end());
    for(p= m.begin(); p!= m.end(); p++)
            cout<<p->first<<" "<<p->second<<endl;
    return 0;
}

