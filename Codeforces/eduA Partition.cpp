#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,B=0,C=0,a;
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a);
        if(a>=0)
            B+=a;
        else
            C+=a;
    }
    printf("%d",max((B-C),(C-B)));
    return 0;
}
