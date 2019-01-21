#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c=1;
    scanf("%d",&n);
    while(n--)
    {
        int a,b;
        scanf("%d%d",&a,&b);
        printf("Case %d: %d\n",c++,a+b);
    }
    return 0;
}
