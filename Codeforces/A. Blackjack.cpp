#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d", &n);
    if (n <= 10 || n - 10 > 11)printf("0");
    else
    {
        if (n - 10 == 10)printf("15");
        else printf("4");
    }
    return 0;
}


