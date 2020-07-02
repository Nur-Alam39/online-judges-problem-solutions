#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, a, ans;
    scanf("%d",&n);
    int Max = INT_MIN, Min = INT_MAX, Max_index = 0, Min_index = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a);
        if (a <= Min)Min = a, Min_index = i;
        if (a > Max)Max = a, Max_index = i;
    }
    ans = Max_index + (n - 1 - Min_index);
    if (Max_index > Min_index) ans--;
    printf("%d\n", ans);
    return 0;
}
