#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    int a[n+1],b[n+1],an=0;
    bool ans[n+1];
    memset(ans,true,sizeof(ans));
    for(int i=1; i<=n; i++)scanf("%d",&a[i]),b[i]=i-a[i];
    for(int i=1; i<=n; i++)printf("%d ",b[i]);
    int j=n-1;
    for(int i=n; i>=1; i--)
    {
        if(ans[i])
        {
            printf("\ni=%d: b[i]=%d\n",i,b[i]);
            while(j>=1)
            {
                printf("j=%d i-li=%d ",j,b[i]);

                if(j>=b[i])
                {
                    printf(" kill");
                    ans[j]=false,j--;
                }
                else
                {
                    printf("not kill");
                    j--;
                    break;
                }
                printf("\n");
            }
        }
        if(j==1)break;
    }
    for(int i=1; i<=n; i++)
    {
        if(ans[i]==true)printf("1 "),an++;
        else printf("0 ");
    }
    printf("\nans=%d",an);
    return 0;
}
