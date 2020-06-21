#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc,c=1;
    scanf("%d",&tc);
    while(tc--)
    {
        int n;
        scanf("%d",&n);
        string a[n];
        map<string,int>m;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            m[a[i]]++;
        }
        map<int, string> ms;
        for ( map<string, int>::iterator i = m.begin(); i != m.end(); i++ )
            ms[i->second]=i->first;
        map<int, string>::iterator i;
        i=ms.end();
        --i;
        cout<<"Case "<<c++<<": "<<i->second<<endl;
    }
    return 0;
}

