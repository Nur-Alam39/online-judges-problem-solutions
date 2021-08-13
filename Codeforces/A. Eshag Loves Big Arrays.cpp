#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    scanf("%d", &tc);

    while (tc--)
    {
        int n;
        scanf("%d", &n);
        int a[n];

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }

        sort (a, a + n);
        int f = a[0], cnt = 0;

        for (int i = 0; i < n; i++)
        {
            if (a[i] == f) cnt++;
        }

        int ans = n - cnt;
        printf("%d\n", ans);
    }
    return 0;
}
