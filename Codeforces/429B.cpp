#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b=0;
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a);
        if(a%2!=0)b++;
    }
    if(b)printf("First");
    else printf("Second");
    return 0;
}

