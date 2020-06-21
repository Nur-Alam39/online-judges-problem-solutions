#include<bits/stdc++.h>
using namespace std;
#define ulli unsigned long long int
ulli a[100];
void fib()
{
    a[1]=1;
    a[2]=2;
    for(int i=3;i<=80;i++)a[i]=a[i-1]+a[i-2];
}
int main()
{
    int n;
    fib();
    while(scanf("%d",&n)&&n)
    {
        printf("%llu\n",a[n]);
    }
    return 0;
}
