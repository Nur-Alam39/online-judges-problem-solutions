#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,l,c=1;
    scanf("%d%d",&n,&l);
    int a[n],b[n],d[n],j=0;
    for(int i=0; i<n; i++)
        scanf("%d",&a[i]);
    for(int i=0; i<n; i++)
        scanf("%d",&b[i]);
    while(next_permutation(b,b+n))
    {
        c=1;
        int d[n];
        if(n>1)
        d[0]=abs(b[0]-b[1]);
        for(int i=1; i<n; i++)
        {
            if((abs(b[i]-b[i-1])!=abs(b[i-1]-b[i-2]))||abs(b[i]-b[i-1])>=l)
                {
                    c=0;
                    break;
                }
            else
                 c=1;
        }
        if(c==1)
        {
            printf("YES");
            return 0;
        }
    }
    printf("NO");
    return 0;
}


