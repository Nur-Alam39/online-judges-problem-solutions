#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b;
    scanf("%d%d%d",&n,&a,&b);
    int ar[n];
    for(int i=0;i<n;i++)scanf("%d",&ar[i]);
    int mn=min(a,b),cost=0;
    int i=0,j=n-1;
    while(i<=j)
    {
        if((ar[i]!=2&&ar[j]!=2)&&(ar[i]!=ar[j]))
        {
            printf("-1");
            return 0;
        }
        else if((ar[i]!=2&&ar[j]!=2)&&(ar[i]==ar[j]))
        {

        }
        else if(ar[i]==2&&ar[j]==2&&i!=j)cost+=mn*2;
        else if(ar[i]==2&&ar[j]!=2)
        {
            if(ar[j]==0)cost+=a;
            else cost+=b;
        }
        else if(ar[i]!=2&&ar[j]==2)
        {
            if(ar[i]==0)cost+=a;
            else cost+=b;
        }
        else if(i==j&&ar[i]==2)cost+=mn;
        i++;
        j--;
    }
    printf("%d",cost);
    return 0;
}
