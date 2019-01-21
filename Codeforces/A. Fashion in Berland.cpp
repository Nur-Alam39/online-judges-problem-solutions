#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c=0,a;
    scanf("%d",&n);
    if(n==1)
    {
        scanf("%d",&a);
        if(a==1)
            printf("YES");
        else
            printf("NO");
    }
    else
    {
        for(int i=0; i<n; i++)
        {
            scanf("%d",&a);
            if(a==0)
                c++;
        }
        if(c<2&&c!=0)
            printf("YES");
        else
            printf("NO");
    }
    return 0;
}
