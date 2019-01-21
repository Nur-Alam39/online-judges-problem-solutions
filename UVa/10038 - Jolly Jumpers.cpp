#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(scanf("%d",&n)==1)
    {
        int a[n],f=1;
        set<int>b;
        for(int i=0; i<n; i++)
            scanf("%d",&a[i]);
        for(int i=1; i<n; i++)
            b.insert(abs(a[i]-a[i-1]));
        if(b.size()==n-1)
            printf("Jolly\n");
        else
            printf("Not Jolly\n");
    }
    return 0;
}
