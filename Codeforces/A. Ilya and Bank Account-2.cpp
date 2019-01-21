#include<bits/stdc++.h>
#include <string>
using namespace std;
int main()
{
    int n,l,p,q;
    scanf("%d",&n);
    if(n>=0)return printf("%d",n),0;
    l=n%10;
    p=n/10;
    q=n/100;
    q*=10;
    q+=l;
    printf("%d",max(p,q));
    return 0;
}



