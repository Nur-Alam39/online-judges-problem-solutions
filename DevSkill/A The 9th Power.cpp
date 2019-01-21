#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    long long int n;
    scanf("%d",&tc);
    while(tc--)
    {
        scanf("%lld",&n);
        if(n%2==0)
            printf("1\n");
        else
            printf("9\n");
    }
    return 0;
}
