#include<bits/stdc++.h>
using namespace std;
int Int(){int n; scanf("%d", &n); return n;}
int main()
{
    int n = Int(), m = Int(), d = Int();
    int platform[m + 1], length_platform = 0;
    for (int i = 1; i <= m; i++)
    {
        platform[i] = Int();
        length_platform += platform[i];
    }
    if (m * d + length_platform >= n)
        printf("Yes\n");
    else printf("No\n");
    int a[n + 2] = {0};
    for (int i = 1; i <= m; i++)
        a[n - i] = platform[i];
    for (int i = 1; i <= n; i++)
        printf("%d ", a[i]);
    int p_index = n - m, x = 1;
    printf("\nlast = %d\n", a[p_index]);
    for (int i = 0; i <= n + 1; i++)
    {
        if (i + d <= n + 1 && a[i + d] == 0)
        {
            for(int j = i + d; j <= a[p_index]; j++)
                a[j] = x;
            i += d - 1;
            x++;
        }
        else if (i + d >= n + 1)
        {
            break;
        }
    }
    for (int i = 1; i <= n; i++)
        printf("%d ", a[i]);
    return 0;
}


