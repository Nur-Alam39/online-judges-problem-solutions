#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,c;
    scanf("%d%d%d",&n,&a,&b);
    for(int i=0;;i++)
    {
        c=i*a;
        if(c>n)return printf("NO"),0;
        if((n-c)%b==0)
        {
            printf("YES\n%d %d",i,(n-c)/b);
            break;
        }
    }
    return 0;
}

