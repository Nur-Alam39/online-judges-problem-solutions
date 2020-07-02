#include<bits/stdc++.h>
using namespace std;
int Int(){int n;scanf("%d",&n);return n;}
int main()
{
    int n =Int();
    for(int i = n + 1; ; i++)
    {
        int x = i;
        set<int> d;
        while(x)
        {
            d.insert(x % 10);
            x /= 10;
        }
        if(d.size() == 4)
        {
            printf("%d", i);
            break;
        }
    }
    return 0;
}


