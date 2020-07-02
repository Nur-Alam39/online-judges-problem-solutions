#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d", &n);
    double ans = 0, d = n;
    for(int i = 1; i <= n; i++)
    {
        ans += 1 / d;
        d--;
    }
    cout << ans;
    return 0;
}





