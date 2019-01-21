#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,k,d;
    scanf("%I64d%I64d",&n,&k);
    d=n/2;
    if(n%2!=0)d++;
    if(k<=d)
        printf("%I64d",2*(k-1)+1);
    else
        printf("%I64d",2*(k-d));
    return 0;
}
