#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a, b, c = "";
    cin >> a >> b;
    int l = a.size();
    for (int i = 0; i < l; i++)
    {
        if (a[i] != b[i])c += '1';
        else c += '0';
    }
    return cout << c, 0;
}

