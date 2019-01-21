#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,g,c=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
        if(a[i]==1)
            c++;
    }
    if(c)
        return printf("%d",n-c),0;
    for(int i=0; i<n; i++)
    {
        for(int j=i; j<n-1; j++)
        {
            g=__gcd(a[j],a[j+1]);
            if(g==1)
                return printf("%d",n-i),0;
            else
                a[j]=g;
        }
    }
    printf("-1");
    return 0;
}





