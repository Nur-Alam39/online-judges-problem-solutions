#include<bits/stdc++.h>
#define lli long long int
//scanf("%I64d",&n);
using namespace std;
int main()
{
    int n,ans=0,z;
    char a[110],c;
    scanf("%d%c%s",&n,&c,&a);
    for(int i=0;a[i];i++)
    {
        if(a[i]=='x')
        {
            z=0;
            while(a[i]=='x')z++,i++;
            if(z>=2)ans+=z-2;
            i--;
        }
    }
    if(ans>0)printf("%d",ans);
    else printf("0");
    return 0;
}

