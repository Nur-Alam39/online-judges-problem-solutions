#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    scanf("%d",&tc);
    while(tc--)
    {
        int n;
        scanf("%d",&n);
        int a[n];
        for(int i=0;i<n;i++)scanf("%d",&a[i]);
        sort(a,a+n);int ls=0,rs=0;
        int l=1,r=n-2;
        ls=a[0],rs=a[n-1];
        while(l<r)
        {
            if(ls<rs)
                ls+=a[l++];
            else rs+=a[r--];
        }
        printf("%d\n",abs(ls-rs));
    }
    return 0;
}
