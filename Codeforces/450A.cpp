#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int n,C=0,B=0,X,Y;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%ld%ld",&X,&Y);
        if(X<0)C++;
        else B++;
    }
    if(C<=1||C>=n-1)printf("Yes");
    else printf("No");
    return 0;
}
