#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    for(int i=a;i>=0;i--)
    {
        if(i*2<=b&&i*4<=c)
        {
            printf("%d",i+2*i+4*i);
            return 0;
        }
    }
    printf("0");
    return 0;
}
