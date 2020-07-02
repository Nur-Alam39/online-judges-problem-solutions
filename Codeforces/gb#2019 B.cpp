#include<bits/stdc++.h>

using namespace std;
int main()
{
    int tc;
    scanf("%d", &tc);
    while(tc--)
    {
        int n;
        scanf("%d", &n);
        int a[n + 1];
        a[0] = -1;
        for(int i = 1; i <= n; i++)
            scanf("%d", &a[i]);
        int flag = 1;
        for(int i = 1; i < n; i++)
        {
            int diff = abs(a[i] - a[i+1]);
            if(diff >= 2)
            {
                flag = 0;
                printf("YES\n%d %d\n", i, i + 1);
                break;
            }
        }
        if(flag)
            printf("NO\n");
    }
    return 0;
}



