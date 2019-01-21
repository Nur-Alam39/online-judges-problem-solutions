#include<bits/stdc++.h>
using namespace std;
long int lowbit(long int n)
{
    int a[10000],b=0,d;
    long int sum=0,j=0;
    while(n!=0)
    {
        d=n%2;
        sum+=d*pow(2,j);
        if(d==1)
            break;
        n/=2;
        j++;
    }
    return sum;
}
int main()
{
    long int s,l;
    scanf("%ld%ld",&s,&l);
    long int lb[l+1];
    for(long int i=1;i<=l;i++)
        lb[i]=lowbit(i);
    for(long int i=1;i<=l;i++)
        cout<<lb[i]<<" ";
    return 0;
}
