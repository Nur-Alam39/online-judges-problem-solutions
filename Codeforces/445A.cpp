#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[7],sum=0,d;
    for(int i=1; i<=6; i++)scanf("%d",&a[i]),sum+=a[i];
    for(int i=1; i<=4; i++)
    {
        for(int k=i+1; k<=5; k++)
            for(int l=k+1; l<=6; l++)
            {
                d=sum-(a[i]+a[k]+a[l]);
                if((a[i]+a[k]+a[l])-d==0)
                    return printf("YES"),0;
            }
    }
    return printf("NO"),0;
}
