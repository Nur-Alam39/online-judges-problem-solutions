#include<bits/stdc++.h>
#define N 100005
using namespace std;
int ans[N],q,l,r;
char a[N];
int main()
{
    scanf("%s",&a);
    for(int i=1; a[i]; i++)
        ans[i]=ans[i-1]+(a[i-1]==a[i]);
    scanf("%d",&q);
    while(q--)
        scanf("%d%d",&l,&r),printf("%d\n",ans[r-1]-ans[l-1]);
    return 0;
}




