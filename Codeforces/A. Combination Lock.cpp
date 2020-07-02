#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d", &n);
    string a, b;
    cin >> a >> b;
    int ans = 0;
    for(int i = 0; i < n; i++)
    {
        int d1 = a[i] - '0';
        int d2 = b[i] - '0';
        if(d1 < d2)swap(d1, d2);
        int x = abs(d1 - d2);
        int y = abs(d1 - (d2 + 10));
        ans += min(x, y);
    }
    printf("%d", ans);
    return 0;
}
