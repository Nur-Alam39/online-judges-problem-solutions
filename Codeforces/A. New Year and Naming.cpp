#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    scanf("%d %d", &n ,&m);
    vector<string> a, b;
    string x;
    a.push_back("aaa");
    b.push_back("bbb");
    for(int i = 0; i < n; i++)
    {
        cin >> x;
        a.push_back(x);
    }
    for(int i = 0; i < m; i++)
    {
        cin >> x;
        b.push_back(x);
    }
    int q;
    scanf("%d", &q);
    while(q--)
    {
        int y;
        scanf("%d", &y);
        y--;
        int p1 = y % n;
        int p2 = y % m;
        if(p1 == 0)p1 = n;
        if(p2 == 0)p2 = m;
        cout << a[p1] << b[p2] <<endl;
    }
    return 0;
}
