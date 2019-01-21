#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int n;
    scanf("%ld",&n);
    long int a[n],c=1,m=1;
    for(int i=0; i<n; i++)
        scanf("%ld",&a[i]);
    for(int i=1; i<n; i++)
    {
        if(a[i]>=a[i-1])
            c++;
        else
            {
                m=max(m,c);
                c=1;
            }
    }
    m=max(m,c);
    printf("%ld",m);
    return 0;
}
