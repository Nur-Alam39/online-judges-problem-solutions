#include<bits/stdc++.h>
using namespace std;
bool primeFactors(int n)
{
    if(n==1)return true;
    int f=1;
    while (n%2 == 0)
    {
        n = n/2;
    }
    for (int i = 3; i <= sqrt(n); i = i+2)
    {
        while (n%i == 0)
        {
            if(i>3)return false;
            n = n/i;
        }
    }
    if(n>2)
    {
        if(n==3)f=1;
        else return false;
    }
    if(f)return true;
}
int main()
{
   long int l,r;
   bool c;
   int z=0;
   scanf("%ld%ld",&l,&r);
    for(long int i=l; i<=r; i++)
    {
        c=primeFactors(i);
        if(c)z++;
    }
    printf("%d",z);
    return 0;
}
