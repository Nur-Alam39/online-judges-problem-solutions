#include<bits/stdc++.h>
#define lli long long int
using namespace std;
int main()
{
    int n,f,k;
    lli sum;
    scanf("%d",&n);
    int a[n],b[n];
    vector<lli>c;
    for(int i=0; i<n; i++)scanf("%d",&a[i]);
    for(int i=0; i<n; i++)scanf("%d",&b[i]);
    for(int i=0; i<n; i++)
    {
        f=c.size(),k=0,sum=0;
        while(f--)
        {
            if(c[k]>=b[i])c[k]-=b[i],sum+=b[i];
            else sum+=c[k],c.erase(c.begin()+k),k--;
            k++;
        }
        if(a[i]>=b[i])sum+=b[i],c.push_back(a[i]-b[i]);
        else if(a[i]<b[i])sum+=a[i];
        printf("%I64d ",sum);
    }
    return 0;
}

