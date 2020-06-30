#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the jumpingOnClouds function below.
int jumpingOnClouds(vector<int> c, int k) {
    int n = c.size();
    int i = k, e = 100;
    while (1) {
        printf("i = %d\n", i);
        int index = i % n;
        if (c[index] == 0) e--;
        else e -= 3;
        if (index == 0) break;
        i += k;

    }
    printf("e1 = %d\n", e);

    return e;
}

int main() {
    int n, k;
    cin >> n >> k;
    int x;
    vector<int> c;
    for (int i = 0; i < n; i++) {
        scanf("%d", &x);
        c.push_back(x);
    }
    cout << jumpingOnClouds(c, k);
    return 0;
}
