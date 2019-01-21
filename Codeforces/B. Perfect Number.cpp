#include<bits/stdc++.h>
using namespace std;
int f(int n)
{
    int s=0;
    while(n)s+=n%10,n/=10;
    return s;
}
int main()
{
    int n,x=1;
    scanf("%d",&n);
    for(;n;)
    {
        if(f(x)==10)n--;
        x++;
    }
    return printf("%d",x-1),0;
}
