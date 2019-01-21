#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    scanf("%d",&n);
    char a[40];
    int af[n],bf[n];
    for(i=0; i<n; i++)
        scanf("%s%d%d",&a,&af[i],&bf[i]);
    for(i=0; i<n; i++)
    {
        if(af[i]>=2400&&bf[i]>af[i])
            {
                printf("YES");
                break;
            }
    }
    if(i==n)
        printf("NO");
    return 0;
}


