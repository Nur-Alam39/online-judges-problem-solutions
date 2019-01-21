#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    scanf("%d%d",&n,&x);
    int a[n],sum=0;
    for(int i=0; i<n; i++)scanf("%d",&a[i]);
    for(int i=0; i<n-1; i++)
    {
        if(sum+a[i]+1<=x)sum+=a[i]+1;
        else return printf("No"),0;
    }
    if(sum+a[n-1]<=x)sum+=a[n-1];
    else return printf("No"),0;

    if(sum==x)printf("Yes");
    else return printf("No"),0;
}


