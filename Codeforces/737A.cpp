#include<bits/stdc++.h>
using namespace std;

int Int(){ int n; scanf("%d", &n); return n; }



void solve() {
    int n;
    scanf("%d", &n);
    double a, sum = 0, mx = -10e10;
    for (int i = 0; i < n; i++) {
        scanf("%lf", &a);
        sum += a;
        mx = max(mx, a);
    }
    printf("%.17lf\n", ((sum - mx) / (n - 1)) + mx );
}

int main() {
    int tc = Int();
    while (tc--) solve();
    return 0;
}

