#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int a,b;
    int tc;
    scanf("%d",&tc);
    while(tc--)
    {
        scanf("%ld%ld",&a,&b);
        if(b==0)printf(":kick:\n");
        else if(a%b==0)printf(":wink:\n");
        else printf(":kick:\n");
    }
    return 0;
}
