#include<bits/stdc++.h>
using namespace std;
int a,p,b[110];
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a);
        b[a]++;
        if(b[a]%2==0)p++;
    }
    printf("%d",p);
    return 0;
}
