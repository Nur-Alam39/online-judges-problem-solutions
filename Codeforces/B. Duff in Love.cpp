#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    vector<long int>d;
    scanf("%I64d",&n);
    for(long long int i=n;i<=n/2;i++)
        if(n%i==0)
        d.push_back(i);
    for(int i=0;i<d.size();i++)
        printf("%ld ",d[i]);
    return 0;
}
