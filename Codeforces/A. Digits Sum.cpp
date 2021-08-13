#include<bits/stdc++.h>
using namespace std;

int main() {
    int tc, n;
    scanf("%d", &tc);
    while (tc--) {
        scanf("%d", &n);
        if (n < 9) printf("0\n");
        else if (n == 9) printf("1\n");
        else printf("%d\n", n / 10);
    }
    return 0;
}
