#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,a[6]= {0},b[6]= {0},e_a=0,e_b=0,f;
    scanf("%d",&n);
    for(int i=1; i<=5; i++)
        a[i]=b[i]=0;
    for(int i=0; i<n; i++)
        scanf("%d",&x),a[x]++;
    for(int i=0; i<n; i++)
        scanf("%d",&x),b[x]++;
    for(int i=1; i<=5; i++)
    {
        f=a[i]+b[i];
        if(f%2==0)
        {
            if(a[i]>b[i])
            {
                while(a[i]!=b[i])
                    a[i]--,b[i]++,e_a++;
            }
        }
        else if(f%2!=0&&f!=0)
        {
            printf("-1");
            return 0;
        }
    }
    printf("%d",e_a);
    return 0;
}
