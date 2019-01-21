#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,c;
    scanf("%d%d%d%d",&n,&a,&b,&c);
    int sum=0,p=1;
    n--;
    while(n--)
    {
        if(p==1)
        {
            if(a>=b)sum+=b,p=2;
            else sum+=a,p=3;
        }
        else if(p==2)
        {
            if(b>=c)sum+=c,p=3;
            else sum+=b,p=1;
        }
        else if(p==3)
        {
            if(a>=c)sum+=c,p=2;
            else sum+=a,p=1;
        }
    }
    printf("%d",sum);
    return 0;
}
