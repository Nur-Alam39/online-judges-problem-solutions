#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,j,f=1;
    long int s=0,d=0;
    for(i=0; i<n; i++)
        scanf("%d",&a[i]);
    for(i=0,j=n-1; i<=j;)
    {
        if(f==1)
        {
            if(a[i]>a[j])
            {
                s+=a[i];
                i++;
                f=0;
            }
            else
            {
                s+=a[j];
                j--;
                f=0;
            }
        }
        else
        {
            if(a[i]>a[j])
            {
                d+=a[i];
                i++;
                f=1;
            }
            else
            {
                d+=a[j];
                j--;
                f=1;
            }
        }
    }
    printf("%ld %ld",s,d);
    return 0;
}
