#include <bits/stdc++.h>
using namespace std;
int bigpowld(int a,long long int n)
{
    int ld= 1;
    while (n)
    {
        if (n&1)
        {
            ld=(ld*a)%10;
            n-=1;
        }
        else
        {
            a=(a*a)%10;
            n>>=1;
        }
    }
    return ld;
}
int main()
{
    long long int n;
    scanf("%I64d",&n);
    cout << bigpowld(1378, n);
}
