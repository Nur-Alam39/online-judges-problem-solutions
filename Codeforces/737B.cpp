#include<bits/stdc++.h>
using namespace std;

int main() {
    int tc;
    scanf("%d", &tc);
    while (tc--) {
        int n, k;
        scanf("%d %d", &n, &k);
        int a[n];
        for (int i = 0; i < n; i++) scanf("%d", &a[i]);

        int sub_arr_cnt = 1;
        int curr = a[0];
        for (int i = 1; i < n; i++) {
            if (a[i] < curr) sub_arr_cnt++;
            curr = a[i];
        }
        printf("sub_arr_cnt = %d\n", sub_arr_cnt);
        if (sub_arr_cnt <= k) printf("Yes\n");
        else printf("No\n");
    }
    return 0;
}
