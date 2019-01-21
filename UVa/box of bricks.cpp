#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c=1,j;
    while(scanf("%d",&n)&&n)
    {
        int a[n],counter=0;
        for(int i=0; i<n; i++)
            scanf("%d",&a[i]);
            sort(a,a+n);
        while(1)
        {
            printf("a[0]=%d a[n-1]=%d\n",a[0],a[n-1]);
            a[0]=a[0]-1;
            a[n-1]=a[n-1]-1;
            for(j=0; j<n; j++)
            {
                if(a[j]!=a[j+1])
                {
                    sort(a,a+n);
                    counter++;
                    break;
                }
            }
            if(j==n-1)
                break;
        }
        printf("Set #%d\nThe minimum number of moves is %d.\n",c++,counter);
    }
    return 0;
}
