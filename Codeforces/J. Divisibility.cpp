#include<bits/stdc++.h>
using namespace std;
int main()
{
    int counter=0;
    long long int n;
    scanf("%lld",&n);
    for(long long int i=1;i<=n;i++)
        if(i%2==0&&i%3==0&&i%4==0&&i%5==0&&i%6==0&&i%7==0&&i%8==0&&i%9==0&&i%10==0)
            {
                printf("%d\n",i);
                counter++;
            }
        printf("%d",counter);
    return 0;
}
