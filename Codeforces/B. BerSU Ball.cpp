#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++)
        scanf("%d",&a[i]);
    scanf("%d",&m);
    int b[m],d,s=0;
    for(int j=0; j<m; j++)
        scanf("%d",&b[j]);
    sort(a,a+n);
    sort(b,b+m);
    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
        {
            d=abs(a[i]-b[j]);
            if(d<=1)
            {
                b[j]=d+2000;
                s++;
                break;
            }
        }
    printf("%d",s);
    return 0;
}
