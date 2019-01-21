#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string a;
    cin>>a;
    long int u_d=0,r_l=0;
    for(long int i=0; i<a.size(); i++)
    {
        if(a[i]=='L')
            r_l++;
        else if(a[i]=='R')
            r_l--;
        else if(a[i]=='U')
            u_d++;
        else if(a[i]=='D')
            u_d--;
    }
    if(r_l==0&&u_d==0)
        printf("0");
    else if(r_l==u_d)
    {

    }
    return 0;
}
