#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    if(n%2==0)
    {
        printf("%d\n",n/2);
        n/=2;
        for(int i=0; i<n; i++)
            printf("2 ");
    }
    else
    {
        n/=2;
        printf("%d\n",n);
        for(int i=0; i<n-1; i++)
            printf("2 ");
        printf("3");
    }
    return 0;
}
