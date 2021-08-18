#include<bits/stdc++.h>
using namespace std;

int Int(){ int n; scanf("%d", &n); return n; }

void solve() {
    int a = Int(), b = Int(), c = Int();
    int d = abs(a - b);
    int total = d * 2;
    int ans = -1, mx = max(a, max(b, c));
    if (d == 1 || mx > total) ans = -1;
    else if (c + d > total) ans = c - d;
    else if (c - d < total) ans = c + d;
    printf("%d\n", ans);
}

int main() {
    int tc = Int();
    while (tc--) solve();
    return 0;
}


