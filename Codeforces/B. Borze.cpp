#include<bits/stdc++.h>
using namespace std;
int Int(){int n;scanf("%d",&n);return n;}
int main()
{
    string a, d = "";
    cin >> a;
    int s = a.size();
    for(int i = 0; i < s; i++)
    {
        if(a[i] == '.')
            d += '0';
        else if(a[i] == '-')
        {
            if(a[i + 1] == '.')
                d += '1';
            else if(a[i + 1] == '-')
                d += '2';
            i++;
        }
    }
    cout << d;
    return 0;
}


