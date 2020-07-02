#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    scanf("%d", &tc);
    while(tc--)
    {
        int n, s, k, x;
        scanf("%d %d %d", &n, &s, &k);
        vector<int> close;
        int ans = INT_MAX;
        for(int i = 1; i <= k; i++)
        {
            scanf("%d", &x);
            close.push_back(x);
        }
        sort(close.begin(), close.end());
        for(long int i = 1; i <= n; i++)
        {
            if(find(close.begin(), close.end(), i) == close.end())
            {
                int m = abs(s - i);
                if(m < ans)
                    ans = m;
            }
        }
        printf("%d\n", ans);
    }
    return 0;
}
