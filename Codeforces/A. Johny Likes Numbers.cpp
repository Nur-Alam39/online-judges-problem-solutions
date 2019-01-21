#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int n,k,i;
    scanf("%ld%ld",&n,&k);
    i=n+1;
    while(1)
    {
        if(i%k==0)
            break;
        i++;
    }
    printf("%ld",i);
    return 0;
}
