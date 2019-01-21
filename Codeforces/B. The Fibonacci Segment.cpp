#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    long int a[n],len=2;
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
        if(i>1)if(a[i]==a[i-1]+a[i-2])len++;
    }
    printf("%ld",len);
    return 0;
}
