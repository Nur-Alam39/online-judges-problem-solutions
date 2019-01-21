#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p,q,c=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d%d",&p,&q);
        if(q-p>=2)
            c++;
    }
    printf("%d",c);
    return 0;
}

