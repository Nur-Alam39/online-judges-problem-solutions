#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],b[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
        b[i]=a[i];
    }
    sort(b,b+n);
    int sum=b[0]+b[n-1];
    for(int k=0; k<n/2; k++)
    {
        for(int i=0; i<n; i++)
        {
            int f=1;
            for(int j=i+1; j<n; j++)
            {
                if(a[i]+a[j]==sum)
                {
                    a[i]=0;
                    a[j]=0;
                    printf("%d %d\n",i+1,j+1);
                    f=0;
                    break;
                }
            }
            if(f==0)
                break;
        }
    }
    return 0;
}
