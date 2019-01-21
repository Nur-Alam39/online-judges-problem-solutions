#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0,bob,alice=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
            sum=sum+a[i];
        }
    bob=sum;
    printf("%d",sum);
    for(int i=n-1; i>=0; i--)
    {
        if(bob-a[i]>alice)
            bob-=a[i],alice+=a[i];
        else break;
    }
    printf("%d %d",alice,bob);
    return 0;
}

