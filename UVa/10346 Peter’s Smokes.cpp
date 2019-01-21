#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,k,c,m;
    while(cin>>n>>k)
    {
        m=0;
        c=0;
        for(int i=n-1; i>=0; i--)
        {
            if(m==k)
            {
                m=0;
                c++;
            }
            c++;
            m++;
        }
        cout<<c<<endl;
    }
    return 0;
}
