#include<bits/stdc++.h>
using namespace std;
int Int(){int n;scanf("%d",&n);return n;}
int main()
{
    int n =Int();
    n++;
    for(;;)
    {
        int x = n, i = 0, f = 1;
        int d[5];
        while(x)
        {
            d[i++] = x % 10;
            x /= 10;
        }
        sort(d, d + 4);
        for(int i = 1; i < 4; i++)
        {
            if(d[i] == d[i-1])
            {
                f = 0;
                n++;
                break;
            }
        }
        if(f == 1)
        {
            printf("%d", n);
            break;
        }
    }
    return 0;
}

