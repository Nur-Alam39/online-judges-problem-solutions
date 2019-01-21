#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,f=1,t;
    cin>>n;
    string s1="I hate",s2="I love",s3="that";
    t=n-1;
    for(int i=1; i<=n; i++)
    {
        if(f==1)
        {
            cout<<s1;
            f=0;
        }
        else
            {
                cout<<s2;
                f=1;
            }
            if(t>=1)
            {
                cout<<" "<<s3<<" ";
                t--;
            }
    }
    cout<<" it";
    return 0;
}


