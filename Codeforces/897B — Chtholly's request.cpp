#include<bits/stdc++.h>
#define ulli unsigned long long int
using namespace std;
int main()
{
    ulli k,p,n,sum=0;
    scanf("%llu%llu",&k,&p);
    for(ulli i=1; i<=k; i++)
    {
        string a,b,c;
        stringstream s;
        s<<i,b=s.str(),a=b;
        reverse(a.begin(),a.end());
        c=b+a;
        if(c[0]!='0')
        {
            stringstream stnc(c);
            n=0,stnc>>n;
            sum=(sum+n)%p;
        }
    }
    cout<<sum;
    return 0;
}
