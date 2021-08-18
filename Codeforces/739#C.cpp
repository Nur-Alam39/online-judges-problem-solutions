#include<bits/stdc++.h>
using namespace std;

int Int(){ int n; scanf("%d", &n); return n; }

void solve() {
    int k = Int();
    int x = ceil(sqrt(k));
    int s = (x - 1) * (x - 1) + 1;
    int e = x * x;
    int start_row = 1, end_row = x;
    int start_col = x, end_col = 1;
    int mid_point = s + (x - 1);
    int r = 1, c = 1;
    if (k >= mid_point) {
        r = end_row, c = start_col - (k - mid_point);
    }
    else {
        r = start_row + (k - s), c = start_col;
    }
    printf("%d %d\n", r, c);
}

int main() {
    int tc = Int();
    while (tc--) solve();
    return 0;
}



