#include <bits/stdc++.h>
using namespace std;

int findDigits(int n) {
    vector<int> digits;
    int x = n, cnt = 0;
    while (n != 0) {
        digits.push_back(n % 10);
        n /= 10;
    }
    int s = digits.size();
    for (int i = 0; i < s; i++) {
        if (digits[i] > 0 && x % digits[i] == 0)
            cnt++;
    }
    return cnt;
}

int main() {
    int n;
    cin >> n;
    cout << findDigits(n);
    return 0;
}

