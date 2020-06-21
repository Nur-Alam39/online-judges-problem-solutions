#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    scanf("%d%d",&a,&b);
    c=abs(a-b);
    if(c%10==9)
        c--;
    else
        c++;
    printf("%d\n",c);
    return 0;
}
