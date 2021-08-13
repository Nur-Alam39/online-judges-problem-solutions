1
\'

int Int(){ int n; scanf("%d", &n); return n; }



void solve() {
    string a;
    cin >> a;
    int s = a.size();
    set <char>str (begin(a) , end(a));
    auto it = str.begin();
    it--;
    if (str.size() == 1 && *it == 'a') printf("NO\n");
    else {
        cout << "YES" << endl;
        if(a[0] == 'a' && a[s - 1] != 'a')
            cout << a << "a" << endl;
        else if(a[0] != 'a' && a[s - 1] == 'a')
            cout << "a" << a << endl;
    }
}

int main() {
    int tc = Int();
    while (tc--) solve();
    return 0;
}
