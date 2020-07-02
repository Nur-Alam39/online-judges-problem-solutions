#include<bits/stdc++.h>

using namespace std;
int main()
{
    int tc;
    scanf("%d", &tc);
    while(tc--)
    {
        int n, k1, k2;
        scanf("%d %d %d", &n, &k1, &k2);
        int a1[k1], a2[k2], f = 1;
        for(int i = 0; i < k1; i++)
        {
            scanf("%d", &a1[i]);
            if(a1[i] == n)
                f = 1;
        }
        for(int i = 0; i < k2; i++)
        {
            scanf("%d", &a2[i]);
            if(a2[i] == n)
                f = 2;
        }
        if(f == 1)
            printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}


