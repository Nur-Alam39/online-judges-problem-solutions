#include<bits/stdc++.h>
using namespace std;
int Int(){int n;scanf("%d",&n);return n;}
int main()
{
    long a = 34587, s1 = 0, s2 = 0, r;
    while(a > 0)
    {
        r = a % 10;
        if(r % 4 == 0)
            s1 += r;
        else s2 += r;
        a /= 10;
    }
    printf("s1 = %ld s2 = %ld\n", s1, s2);
    return 0;
}




