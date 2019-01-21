#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    while(n--)
    {
        string a;
        cin>>a;
        int s=a.size();
        if(s>10)
        {
            s=s-2;
            cout<<a[0]<<s<<a[s+1]<<endl;
        }
        else
            cout<<a<<endl;
    }
    return 0;
}
