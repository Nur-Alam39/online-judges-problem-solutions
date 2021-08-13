#include<bits/stdc++.h>
using namespace std;

int main() {
    int tc;
    scanf("%d", &tc);
    while (tc--) {
        string str;
        cin >> str;
        int len = str.size();
        int l, r, start = 30;
        for (int i = 0; i < len; i++) {
            if (str[i] == 'a') {
                start = i;
                break;
            }
        }
        if (start == 30) printf("NO\n");
        else {
            if (len == 1) {
                if(str[0] == 'a') printf("YES\n");
                else printf("NO\n");
            }
            else {
                l = start - 1, r = start + 1;
                int e = len;
                int x = 1, pre = 1, f = 1;
                while (1) {
                    if (l >= 0 && str[l] == 'a' + x) {
                        l--;
                    }
                    else if (r < e && str[r] == 'a' + x) {
                        r++;
                    }
                    else {
                        printf("NO\n"), f = 0;
                        break;
                    }
                    len--;
                    x++;
                    if (len == 1) break;
                }

                if (f == 1 && len == 1) printf("YES\n");
            }
        }

    }
    return 0;
}

