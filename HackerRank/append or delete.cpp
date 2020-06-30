#include <bits/stdc++.h>

using namespace std;

// Complete the appendAndDelete function below.
string appendAndDelete(string s, string t, int k) {
    int ss = s.size();
    int ts = t.size();
    int match = 0;
    int d = min(ss, ts);
    for (int i = 0; i < d; i++) {
        if (s[i] == t[i]) match++;
        else break;
    }
    printf("match = %d\n", match);
    int rem1 = ss - match;
    int rem2 = ts - match;
    printf("rem1 = %d\n", rem1);
    printf("rem2 = %d\n", rem2);
    string ans = "";
    if (rem1 + rem2 <= k) ans += "Yes";
    else ans += "No";
    return ans;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string t;
    getline(cin, t);

    int k;
    cin >> k;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string result = appendAndDelete(s, t, k);

    cout << result << "\n";

    fout.close();

    return 0;
}
