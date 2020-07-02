#include<bits/stdc++.h>
using namespace std;
void Max(int m, int sum)
{
    string ans = "";
    for (int i = 1; i <= m; i++)
    {
        for (int d = 0; d <= 9; d++)
        {
            if ((i != 1 || d != 0) && (sum - d >= 0 && sum - d <= (m - i) * 9))
            {
                sum -= d;
                ans += d + '0';
                break;
            }
        }
    }
    cout << ans <<" ";
}
void Min(int m, int sum)
{
    string ans = "";
    for (int i = 1; i <= m; i++)
    {
        for (int d = 9; d >= 0; d--)
        {
            if ((sum - d >= 0 && sum - d <= (m - i) * 9))
            {
                sum -= d;
                ans += d + '0';
                break;
            }
        }
    }
    cout << ans;
}
int main()
{
    int m, sum;
    scanf("%d %d", &m, &sum);
    if (m == 1 && sum == 0)
    {
        return printf("0 0"), 0;
    }
    if (9 * m < sum || sum == 0)
    {
        return printf("-1 -1"), 0;
    }
    Max(m, sum);
    Min(m, sum);
    return 0;
}
