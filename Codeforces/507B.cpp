#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    scanf("%d%d",&n,&k);
    for(int i=1;i<=n;i++)
    {
        int l=1,r=1;
        bool a[n+1];
        for(int k=1;k<=n;k++)a[k]=1;
        while(r<=n)
        {
            for(int p=i+1,g=1;p>=0&&g<=k;p--,g++)a[k]=0;
            for(int p=)
        }
    }
    return 0;
}
