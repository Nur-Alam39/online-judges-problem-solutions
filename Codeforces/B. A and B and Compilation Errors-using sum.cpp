#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d", &n);
    long long int a = 0, b = 0, c = 0, val;
    for(int i = 0; i < n; i++)
    {
        scanf("%I64d", &val);
        a += val;
    }
    for(int i = 0; i < n - 1; i++)
    {
        scanf("%I64d", &val);
        b += val;
    }
    for(int i = 0; i < n - 2; i++)
    {
        scanf("%I64d", &val);
        c += val;
    }
    printf("%I64d\n", a - b);
    printf("%I64d\n", b - c);
    return 0;
}


