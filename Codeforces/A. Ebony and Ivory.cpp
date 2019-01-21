#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int ad,bd,f=1;
    ad=c/a;
    bd=c/b;
    for(int i=0; i<=ad+1; i++)
    {
        for(int j=0; j<=bd+1; j++)
        {
            if(a*i+b*j==c)
            {
                f=0;
                printf("YES");
                break;
            }
        }
        if(f==0)
            break;
    }
    if(f==1)
        printf("NO");
    return 0;
}
