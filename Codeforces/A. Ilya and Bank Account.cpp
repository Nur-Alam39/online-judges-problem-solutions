#include<bits/stdc++.h>
#include <string>
using namespace std;
int main()
{
    string a;
    cin>>a;
    if(a[0]!='-')cout<<a;
    else
    {
        a.erase(0,1);
        string l=a,sl="";
        int s=a.size(),a1=0,b1=0,ans;
        l.erase(s-1);
        for(int i=0; i<s; i++)
        {
            if(i==s-2)continue;
            sl+=a[i];
        }
        stringstream ax(l);
        stringstream bx(sl);
        ax >> a1;bx>>b1;
        ans=min(a1,b1);
        if(ans)printf("-%d",ans);
        else printf("0");
    }
    return 0;
}


