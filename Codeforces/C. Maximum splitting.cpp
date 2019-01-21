#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q,n,ans;
    scanf("%d",&q);
    while(q--)
    {
        scanf("%d",&n);
        if(n-4<0||n-1==4||n-3==4||n-7==4)printf("-1\n");
        else{
            ans=n/4;
            if(n%2)ans--;
            printf("%d\n",ans);
        }
    }
    return 0;
}
