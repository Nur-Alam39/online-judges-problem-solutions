#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,m,i1,x;
    scanf("%d",&n);
    int a1[n],a2[n],b[n];
    for(i=0; i<n; i++)
        scanf("%d",&a1[i]);
    for(i=0; i<n; i++)
        a2[i]=a1[i];
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(a2[i]==a2[j])
            a2[j]=0;
        }
    }
    for(i=0; i<n; i++)
        printf("%d ",a2[i]);
    j=0;
    for(i=0; i<n; i++)
    {
        if(a2[i]!=0)
            b[j++]=a2[i];
    }
    int c_n=j;
    printf("\nB:");
    for(i=0; i<j; i++)
        printf("%d ",b[i]);
    printf("\n");
    int total_count[c_n],temp_count[c_n];
    for(i=0; i<c_n; i++)
        total_count[i]=0;
    for(j=1; j<=n; j++)
    {
        for(m=j; m<=n; m++)
        {
            for(i1=0; i1<c_n; i1++)
                temp_count[i1]=0;
            for(x=j-1; x<m; x++)
            {
                printf("%d ",a1[x]);
                temp_count[x]++;
            }
            sort(temp_count,temp_count+c_n);
            total_count[x]++;
            printf("<-[%d,%d]\n",j,m);
            for(i=0; i<c_n; i++)
             printf("total=%d temp=%d\n",total_count[i],temp_count[i]);

        }
    }
    return 0;
}
