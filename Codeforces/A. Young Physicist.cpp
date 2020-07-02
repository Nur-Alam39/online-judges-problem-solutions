#include<bits/stdc++.h>
using namespace std;
int Int(){int n;scanf("%d",&n);return n;}
int main()
{
    int n =Int();
    int x, y, z;
    int sum_x = 0, sum_y = 0, sum_z = 0;
    while(n--)
    {
        x = Int();
        y = Int();
        z = Int();
        sum_x += x;
        sum_y += y;
        sum_z += z;
    }
    if(sum_x == 0 && sum_y == 0 && sum_z == 0)
        printf("YES");
    else printf("NO");
    return 0;
}
