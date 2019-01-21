#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("out.txt","w",stdout);
    long long int n;
    char c='%';
    while(scanf("%lld",&n)&&n>0)
    {
        if(n==1)printf("0%c\n",c);
        else
        {
            n*=25;
            printf("%lld%c\n",n,c);
        }
    }
    return 0;
}


