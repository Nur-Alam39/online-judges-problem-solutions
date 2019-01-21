#include<bits/stdc++.h>
#define lli long long int
using namespace std;
int main()
{
    int n,m,k;
    scanf("%d%d%d",&n,&m,&k);
    int a[n],bx=1,ob=0;
    lli s=0;
    for(int i=0; i<n; i++)
        scanf("%d",&a[i]);
    reverse(a,a+n);
    for(int i=0; i<n; i++)
    {
        s+=a[i],ob++;
        if(s>k)
        {
            bx++,s=a[i];
            if(bx>m)
            {
                bx--,ob--;
                break;
            }
        }
    }
    printf("%d",ob);
    return 0;
}


