#include <bits/stdc++.h>
#define lli long long int
using namespace std;
void divisor(lli n,lli k)
{
    set<lli>d;
    set<lli>::iterator it;
    int c=0,i=1;
    for (int i=1; i<=sqrt(n)+1; i++)
        if(n%i==0)
            d.insert(i),d.insert(n/i);
    if(d.size()>=k)
    {
        for(it=d.begin(); k>i ; it++,i++);
        cout<<*it;
    }
    else
        printf("-1");
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    lli n1,k1;
    scanf("%I64d%I64d",&n1,&k1);
    divisor(n1,k1);
    return 0;
}
