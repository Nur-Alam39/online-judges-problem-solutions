#include<bits/stdc++.h>
using namespace std;

int main() {

    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    sort(a, a + n);
    int sum = 0, cnt = 0;
    for (int  i = n - 1; i >= 0; i--) {
        if (a[i] + sum >= 0) sum += a[i], cnt++;
        else break;
    }
    printf("sum = %d cnt = %d\n", sum, cnt);
    return 0;
}
