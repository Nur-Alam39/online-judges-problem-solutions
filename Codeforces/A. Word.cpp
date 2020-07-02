#include<bits/stdc++.h>
using namespace std;
int Int(){int n;scanf("%d",&n);return n;}
int main()
{
    string w;
    cin >> w;
    int s = w.size(), uc = 0, lc;
    for(int i = 0; i < s; i++)
    {
        int v = w[i] - 'a';
        if(v < 0)uc++;
    }
    lc = s - uc;
    if(lc >= uc)
    {
        for(int i = 0; i < s; i++)
            if(w[i] < 97) w[i] = w[i] + 32;
    }
    else
    {
        for(int i = 0; i < s; i++)
            if(w[i] >= 97) w[i] = w[i] - 32;
    }
    cout << w;
    return 0;
}



