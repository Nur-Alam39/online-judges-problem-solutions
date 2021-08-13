#include<bits/stdc++.h>

using namespace std;

void solve() {
    long long int n, x;
    scanf("%lld", &n);
    int ans = 0;
    if (n < 2050) printf("-1\n");
    else {
        while (n > 0) {
            x = 2050;
            while (x * 10 <= n) x *= 10;
            n -= x;
            ans++;
        }
        if (n == 0) printf("%d\n", ans);
        else printf("-1\n");
    }
}

int main() {
    int tc;
    scanf("%d", &tc);
    while (tc--) solve();
    return 0;
}
