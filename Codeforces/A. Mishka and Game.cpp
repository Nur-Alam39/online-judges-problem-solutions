#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,m=0,c=0;
    cin>>n;
    while(n--)
    {
        int a,b;
        cin>>a>>b;
        if(a>b)
            m++;
        else if(a<b)
            c++;
    }
    if(m==c)
        cout<<"Friendship is magic!^^";
    else if(m>c)
        cout<<"Mishka";
    else
        cout<<"Chris";
    return 0;
}

