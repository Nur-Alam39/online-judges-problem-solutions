#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    scanf("%d%d",&n,&k);
    int a[n],m[k];
    memset(m,0,sizeof(m));
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]),m[a[i]%k]++;
    int total=0;
    total+=(m[0]*(m[0]-1))/2;
    for(int i=1;i<=k/2&&i!=k-1;i++)
        total+=m[i]*m[k-i];
    printf("%d\n",total);
    return 0;
}
