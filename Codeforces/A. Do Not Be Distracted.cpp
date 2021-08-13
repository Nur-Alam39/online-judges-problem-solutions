#include<bits/stdc++.h>
using namespace std;

int main() {
    int tc;
    scanf("%d", &tc);
    while (tc--) {
        int n;
        scanf("%d", &n);
        string a;
        cin >> a;
        int fre[26], flag = 0;
        for (int i = 0; i < 26; i++) fre[i] = 0;
        for (int i = 0; i < a.size(); i++) {
            if (fre[a[i] - 65]) {
                printf("NO\n");
                flag = 1;
                break;
            }
            fre[a[i] - 65]++;

            while (a[i] == a[i + 1])
                i++;
        }
        if (!flag) printf("YES\n");
    }
    return 0;
}
