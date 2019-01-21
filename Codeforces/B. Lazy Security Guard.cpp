#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    float sq=sqrt(n);
    int isq=sqrt(n);
    if(sq==(float)isq)
        printf("%d",4*isq);
    else
    {
        int i=0,r;
        float sq=(sqrt(n));
        int fsq=floor(sq);
        while(1)
        {
            i++;
            r=i*fsq;
            if(r==n)
                break;
            else if(r>n)
            {
                i--;
                break;
            }
        }
        int ans=2*(fsq+i);
        if(r>n)ans+=2;
        printf("%d",ans);
    }
    return 0;
}

