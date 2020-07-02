#include<bits/stdc++.h>

using namespace std;
int main()
{
    int tc;
    scanf("%d", &tc);
    while(tc--)
    {
        int h, m;
        scanf("%d %d", &h, &m);
        int total_minutes = 24 * 60;
        int rem_minutes = h * 60 + m;

        int ans = total_minutes - rem_minutes;
        printf("%d\n", ans);
    }
    return 0;
}
