#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,g,r,d;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d",&g);
        if(g<38)
            printf("%d\n",g);
        else
        {
            d=g/5;
            r=(5*(d+1))-g;
            if(r<3)
                printf("%d\n",g+r);
            else
                printf("%d\n",g);
        }
    }
    return 0;
}
