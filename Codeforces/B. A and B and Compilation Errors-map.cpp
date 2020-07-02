#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d", &n);
    int a[n], b[n - 1];
    map<int, int> frc;
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        frc[a[i]]++;
    }
    for(int i = 0; i < n - 1; i++)
    {
        scanf("%d", &b[i]);
        frc[b[i]]--;
    }
    for(auto i : frc)
    {
        if(i.second)
        {
            cout << i.first << endl;
            break;
        }
    }
    frc.clear();
    for(int i = 0; i < n - 1; i++)
    {
        frc[b[i]]++;
    }
    for(int i = 0; i < n - 2; i++)
    {
        scanf("%d", &b[i]);
        frc[b[i]]--;
    }
    for(auto i : frc)
    {
        if(i.second)
        {
            cout << i.first << endl;
            break;
        }
    }
    return 0;
}

