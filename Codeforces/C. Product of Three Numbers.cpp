#include <bits/stdc++.h>
using namespace std;
int Int()
{
    int n;
    scanf("%d", &n);
    return n;
}

int main()
{
    int tc = Int();
    while(tc--)
    {
        int n = Int(), x = 1, y = 1, z = 1, got = 1;
        int sq = sqrt(n);
        for (int i = 2; i <= sq; i++)
        {
            if(n % i == 0)
            {
                y = 1;
                int d1 = n / i;
                int sq1 = sqrt(d1);
                for(int j = i + 1; j <= sq1; j++)
                {
                    int d2 = d1 / j;
                    if(i * j * d2 == n)
                    {
                        if( i >= 2 && j >= 2 && d2 >= 2 && i != j && j != d2 && d2 != i)
                        {
                            printf("Yes\n%d %d %d\n", i, j, d2);
                            x = y = z = 0;
                            break;
                        }
                    }
                }
                if(!y)
                    break;
            }
        }
        if(x)
            printf("No\n");
    }
    return 0;
}
