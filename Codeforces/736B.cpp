#include<bits/stdc++.h>
using namespace std;

int main() {
    int tc;
    scanf("%d", &tc);
    while(tc--) {
        int n;
        scanf("%d", &n);
        string a, b;
        cin >> a >> b;
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            if (b[i] == '1') {
                if (a[i] == '0') cnt++, a[i] = 'x';
                else if (i - 1 >= 0 && a[i - 1] == '1') cnt++, a[i - 1] = 'x';
                else if (i + 1 < n && a[i + 1] == '1') cnt++, a[i + 1] = 'x';
            }
        }
        printf("%d\n", cnt);
    }
    return 0;
}

