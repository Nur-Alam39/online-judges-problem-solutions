#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[6][6],sum[16],n=0;
    memset(sum,0,sizeof(sum));
    for(int i=0; i<6; i++)
        for(int j=0; j<6; j++)
            scanf("%d",&a[i][j]);
    for(int k=0; k<4; k++)
        for(int i=0; i<4; i++)
        {
            sum[n]+=a[k][i]+a[k][i+1]+a[k][i+2];
            sum[n]+=a[k+1][i+1];
            sum[n]+=a[k+2][i]+a[k+2][i+1]+a[k+2][i+2];
            n++;
        }
    sort(sum,sum+16);
    printf("%d",sum[16-1]);
    return 0;
}
