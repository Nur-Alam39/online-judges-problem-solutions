#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m=1, c=1, n;
    scanf("%d",&n);
    long int a[n];
    for(int i=0; i<n; i++)
        scanf("%d",&a[i]);
    for(int i=1; i<n; i++)
    {
        if(a[i]>a[i-1])
        {
            c++;
            m = max(m,c);
        }
        else
            c=1;
    }
    printf("%d",m);
    return 0;
}
