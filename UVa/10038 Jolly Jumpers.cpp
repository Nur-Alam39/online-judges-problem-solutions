#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(scanf("%d",&n)==1)
    {
        int a[n],dif[n+1],f=1;
        for(int i=0; i<n; i++)scanf("%d",&a[i]);
        for(int i=1; i<n; i++)dif[i-1]=abs(a[i]-a[i-1]);
        sort(dif,dif+n-1);
        for(int i=0; i<n-1; i++)
            if(dif[i]!=i+1)
            {
                printf("Not jolly\n");
                f=0;
                break;
            }
        if(f)printf("Jolly\n");
    }
    return 0;
}
