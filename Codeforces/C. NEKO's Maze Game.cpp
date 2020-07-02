#include<bits/stdc++.h>
using namespace std;
const int N = (int)10e5 + 5;
bool a[4][N];
int main()
{
    int n, q, block = 0, u, v, z;
    scanf("%d %d", &n, &q);
    for(int i = 0; i < q; i++)
    {
        scanf("%d %d", &u, &v);
        z = 2;
        if(u > 1)z = 1;
        if(a[u][v])
        {
            a[u][v] = false;
            if((v - 1 > 0 && !a[z][v - 1]) || !a[z][v] || (v + 1 <= n && !a[z][v + 1]))
                if(block)block--;
        }
        else
        {
            a[u][v] = true;
            if((v - 1 > 0 && a[z][v - 1]) || a[z][v] || (v + 1 <= n && a[z][v + 1]))
                block++;
        }
        if(block)printf("No\n");
        else printf("Yes\n");
    }
    return 0;
}
