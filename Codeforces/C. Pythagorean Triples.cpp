#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long int a,b,c,x;
    cin>>a;
    if(a%2==0)
    {
        x=a*a/4;
        b=x-1;
        c=x+1;
        if(b==0||c==0)
            printf("-1");
        else
            cout<<b<<" "<<c;
    }
    else
    {
        x=a*a/2;
        b=x;
        c=x+1;
        if(b==0||c==0)
            printf("-1");
        else
            cout<<b<<" "<<c;
    }
    return 0;
}
