#include<bits/stdc++.h>
using namespace std;
int Int()
{
    int n;
    scanf("%d",&n);
    return n;
}
int main()
{
    int a, x, y;
    for(int i = 1; i <= 5 ; i++)
    {
        for(int j = 1; j <= 5; j++)
        {
            a = Int();
            if(a == 1)
                x = i, y = j;
        }
    }
    int ans = abs(3 - x) + abs(3 - y);
    printf("%d", ans);
    return 0;
}

