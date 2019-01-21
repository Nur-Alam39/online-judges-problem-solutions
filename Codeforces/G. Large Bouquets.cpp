#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,c=0,d=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a);
        if(a%2)c++;
        else d++;
    }
    printf("%d",min(c,d));
    return 0;
}
