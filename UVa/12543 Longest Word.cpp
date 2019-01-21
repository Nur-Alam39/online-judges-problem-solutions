#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    b='\0';
    while(1)
    {
        cin>>a;
        if(a=="E-N-D")
            break;
        int f=1;
        for(int i=0; i<a.size(); i++)
            if(a[i]>47&&a[i]<58)
            {
                f=0;
                break;
            }
        if(f==1)
            if(a.size()>b.size())b=a;
    }
    for(int i=0; i<b.size(); i++)
        if(b[i]>64&&b[i]<91)
            b[i]+=32;
    cout<<b<<endl;
    return 0;
}
