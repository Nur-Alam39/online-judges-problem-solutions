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
        int a[n],sum=0;
        for(int i=0;i<n;i++)scanf("%d",&a[i]);
        for(int i=n-1;i>=0;i--)
        {
            int le=0;
            for(int j=0;j<i;j++)if(a[j]<=a[i])le++;
            sum+=le;
        }
        printf("%d\n",sum);
    }
    return 0;
}


