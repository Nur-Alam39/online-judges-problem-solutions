#include<bits/stdc++.h>
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
    while (tc--)
    {
        int a = Int(), b = Int(), c = Int(), n = Int();
        int m = max(max(a, b), c);
        long long int sum, x, need, rem;
        sum = a + b + c;
        x = m * 3;
        need = x - sum;
        rem = n - need;
        if(rem >= 0)
        {
            if(rem % 3 == 0)
                printf("Yes\n");
            else printf("No\n");
        }
        else printf("No\n");
    }
    return 0;
}


