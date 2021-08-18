#include<bits/stdc++.h>
using namespace std;

int Int(){ int n; scanf("%d", &n); return n; }

int main() {
    int tc = Int();
    int like[1005];
    for (int i = 1, j = 1; i <= 1666; i++) {
        if (i % 3 == 0 || i % 10 == 3) continue;
        else like[j++] = i;
    }
    while (tc--) {
        int k = Int();
        printf("%d\n", like[k]);
    };
    return 0;
}


