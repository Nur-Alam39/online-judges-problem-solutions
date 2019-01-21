#include<bits/stdc++.h>
using namespace std;
bool is_prime(int n)
{
    if(n==2)return true;
    int sq=sqrt(n);
    for(int i=2; i<=sq; i++)
        if(n%i==0)
            return false;
    return true;
}
int main()
{
    int k;
    while(scanf("%d",&k)&&k)
    {
        if(is_prime(k))
        {
            if(is_prime(pow(2,k)-1))
                {
                    unsigned long long int a=pow(2,k-1)*(pow(2,k)-1);
                    printf("Perfect: %llu!\n",a);
                }
            else
                printf("Given number is prime. But, NO perfect number is available.\n");
        }
        else
            printf("Given number is NOT prime! NO perfect number is available.\n");
    }
    return 0;
}
