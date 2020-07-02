#include<bits/stdc++.h>
using namespace std;
int Int(){int n;scanf("%d",&n);return n;}
int main()
{
    int n =Int();
    int t =Int();
    string a, b;
    cin >> a;

    for(int i = 1; i <= t; i++)
    {
        for(int j = 1; j < a.size(); j++)
        {
            if(a[j] == 'G' && a[j - 1] == 'B')
            {
                swap(a[j], a[j - 1]);
                j++;
            }
        }
    }
    cout << a;
    return 0;
}

