#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    if(n==1)
    {
        int a;
        scanf("%d",&a);
        if(a!=0&&a!=15)
            printf("-1");
        else if(a==0)
            printf("UP");
        else if(a==15)
            printf("DOWN");
    }
    else
    {
        int a[n];
        for(int i=0; i<n; i++)
            scanf("%d",&a[i]);
        if(a[n-1]>a[n-2])
        {
            if(a[n-1]!=15)
                printf("UP");
            else if(a[n-1]==15)
                printf("DOWN");
        }
        else if(a[n-1]<a[n-2])
        {
            if(a[n-1]!=0)
                printf("DOWN");
            else if(a[n-1]==0)
                printf("UP");
        }
    }
    return 0;
}

