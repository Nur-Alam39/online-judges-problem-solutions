#include<bits/stdc++.h>
using namespace std;

int Int() {int n; scanf("%d", &n); return n; }

vector<int> acmTeam(vector<string> topic) {
    int n = topic.size();
    int m = topic[0].size();
    int mx = INT_MIN, cnt = 0, know;
    map<int, int> mp;
    int p = 1;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            know = 0;
            for (int k = 0; k < m; k++) {
                if (topic[i][k] == '1' || topic[j][k] == '1') know++;
            }
            if (mx <= know) {
                mx = know;
                mp[mx]++;
            }
        }
    }
    cnt = mp[mx];
    return {mx, cnt};
}

int main() {
	int n = Int(), m = Int();
	vector<string> topics;
	string s;
	for (int i = 0; i < n; i++) {
        cin >> s;
        topics.push_back(s);
	}
	vector<int> result = acmTeam(topics);
	cout << result[0] << endl << result[1] << endl;
	return 0;
}

