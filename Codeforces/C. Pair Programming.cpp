#include<bits/stdc++.h>
using namespace std;

int main() {
    int tc;
    scanf("%d", &tc);
    while (tc--) {
        int k, n, m;
        scanf("%d %d %d", &k, &n, &m);
        int a[n], b[m];
        for (int i = 0; i < n; i++) scanf("%d", &a[i]);
        for (int i = 0; i < m; i++) scanf("%d", &b[i]);
        vector<int> ans;
        int f = 1, ff = 1, l = 0, r = 0;
        int e = n + m, p;
        p = e;
        while (e--) {
            f = 0;
            if (l < n && a[l] == 0) {
                ans.push_back(a[l]);
                l++;
                k++;
                f = 1;
            }
            else if (r < m && b[r] == 0) {
                ans.push_back(b[r]);
                r++;
                k++;
                f = 1;
            }
            else {
                if (l < n && a[l] <= k) {
                    ans.push_back(a[l]);
                    l++;
                    f = 1;
                }
                else if (r < m && b[r] <= k) {
                    ans.push_back(b[r]);
                    r++;
                    f = 1;
                }
            }

            if (f) continue;
            else {
                printf("-1\n");
                ff = 0;
                break;
            }
        }

        if (ff) {
            for (int i = 0; i < p; i++) {
                cout << ans[i] << " ";
            }
            printf("\n");

        }

    }
    return 0;
}


