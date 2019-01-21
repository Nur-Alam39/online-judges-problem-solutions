#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    if(n==2)
        printf("-1");
    else
    {
        if(n>=3)
            printf("6\n10\n15\n");
        n-=3;
        for(int j=2,i=1;i<=n;i++,j++)
            printf("%d\n",j*6);
    }
    return 0;
}
