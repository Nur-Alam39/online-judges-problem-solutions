#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++)
        scanf("%d",&a[i]);
    int m=0;
    for(int i=0; i<n; i++)
    {
        int c=0;
        for(int j=i; j>0; j--)
        {
            if(a[j-1]<=a[j]&&a[j]<=a[i]&&a[j-1]<=a[i])
                c++;
            else
                break;
        }
        for(int j=i; j<n-1; j++)
        {
            if(a[j+1]<=a[j])
                c++;
            else
                break;
        }
        m=max(c,m);
    }
    printf("%d",m+1);
    return 0;
}
