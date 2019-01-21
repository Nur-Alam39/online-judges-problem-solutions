#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a=0,d=0;
    char c;
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
    {
        scanf("%c",&c);
        if(c=='A')
            a++;
        else if(c=='D')
            d++;
    }
    if(a>d)
        printf("Anton");
    else if(d>a)
        printf("Danik");
    else
        printf("Friendship");
    return 0;
}
