#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    unsigned long long int b,d,s,m=0;
    cin>>b>>d>>s;
    if(b==0&&d==0&&s>0)
        m=s-1;
    else if(b==0&&d>0&&s==0)
        m=d-1;
    else if(b==0&&d>0&&s>0)
        m=d+s-2;
    else if(b>0&&d==0&&s>=0)
        m=min(b,s)-1;
    else if(b>0&&d>0&&s==0)
        m=b+d-2;
    else if(b>0&&d>0&&s>0)
    {
        while(1)
        {
            if(b>0)
                b--;
            else
                break;
            if(d>0)
                d--;
            else
                break;
            if(s>0)
                s--;
            else
                break;
        }
        m=b+d+s;
    }
    else
        m=0;
    cout<<m;
    return 0;
}

