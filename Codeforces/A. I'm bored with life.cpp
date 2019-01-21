#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,i,j=1;
    scanf("%d%d",&a,&b);
    a=min(a,b);
    for(i=1;i<=a;i++)j*=i;
    printf("%d",j);
    return 0;
}
