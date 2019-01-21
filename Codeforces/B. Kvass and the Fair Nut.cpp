#include <bits/stdc++.h>
#define lli long long int
using namespace std;
int main()
{
    int n;
    lli s, sum = 0, f_s = 0, s_s = 0, n_v;
    scanf("%d%I64d", &n, &s);
    int a[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]), sum += a[i];
    if (sum < s)
        return printf("-1"), 0;
    sort(a, a + n);
    int f = a[0];
    for (int i = 1; i < n; i++)
    {
        if (f < a[i])
        {
            n_v = a[i] - f;
            a[i] = f;
            f_s += n_v;
        }
    }
    if (f_s >= s)
        return printf("%d", f), 0;
    else
    {
        lli baki = s - f_s;
        int d = baki / n;
        int m = baki % n;
        if (m)
            d++;
        if (a[0] - d >= 0)
            return printf("%d", a[0] - d), 0;
        else
            return printf("-1"), 0;
    }
}
