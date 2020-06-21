#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c,m=1;
    while(scanf("%d",&n)&&n)
    {
        int a[n];
        c=0;
        for(int i=0; i<n; i++)
            scanf("%d",&a[i]);
        for(int i=1; i<n-1; i++)
            if(a[i]>0&&a[i]>a[i-1]&&a[i]>a[i+1])
                c++;
        printf("Case %d: %d\n",m++,c);
    }
    return 0;
}
