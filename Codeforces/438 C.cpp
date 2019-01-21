#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    scanf("%d%d",&n,&k);
    int a,p[k],cp=0,s=n;
    memset(p,0,sizeof(p));
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<k; j++)
        {
            scanf("%d",&a);
            if(a==1)
            {
                p[j]++;
                cp++;
            }
        }
        if(cp==k)s--;
    }
    if(s==0)
    {
        printf("NO");
        return 0;
    }
    int kw=n/2;
    for(int i=0; i<k; i++)
    {
        if(p[i]>kw)
        {
            printf("NO");
            return 0;
        }
    }
    printf("YES");
    return 0;
}
