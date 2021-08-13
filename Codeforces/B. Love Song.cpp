#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, q;
    scanf("%d %d", &n, &q);
    string a;
    cin >> a;
    int l, r;
    int qu_sum[n];

    qu_sum[0] = a[0] - 96;

    for (int i = 1; i < n; i++) {
        qu_sum[i] = qu_sum[i - 1] + (a[i] - 96);
    }

    while (q--) {
        scanf("%d %d", &l, &r);
        l--, r--;
        int ans = qu_sum[r];
        if (l > 0 && l <= r) ans -= qu_sum[l - 1];
        printf("%d\n", ans);
    }

    return 0;
}
