#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,zr,zc,sr,sc,i,j;
    scanf("%d",&n);
    if(n==1)
        {
            scanf("%d",&n);
            printf("1");
        }
    else
    {
        long int a[n][n];
        for(i=0; i<n; i++)
            for(j=0; j<n; j++)
            {
                scanf("%ld",&a[i][j]);
                if(a[i][j]==0)
                {
                    zr=i;
                    zc=j;
                }
            }
        unsigned long long int sum_r=0,sum_c=0,sum_zr=0,sum_zc=0,sum_d1=0,sum_d2=0,ans1,ans2,ans3,ans4;
        if(zr==n-1&&zr!=0)
            sr=n-2;
        else if(zr!=n-1&&zr==0)
            sr=1;
        else
            sr=zr+1;
        if(zc==n-1&&zc!=0)
            sc=n-2;
        else if(zc!=n-1&&zc==0)
            sc=1;
        else
            sc=zc+1;
        //cout<<zr<<" "<<zc<<endl<<sr<<" "<<sc<<endl;
        for(i=0; i<n; i++)//s_r
            sum_r+=a[sr][i];
        for(i=0; i<n; i++)//s_c
            sum_c+=a[i][sc];
        for(i=0; i<n; i++)//s_zr
            sum_zr+=a[zr][i];
        for(i=0; i<n; i++)//s_zc
            sum_zc+=a[i][zc];
        int rs=0,cs=0;
        for(i=0; i<n; i++)//s_d1
            sum_d1+=a[rs++][i];
        for(i=n-1; i>=0; i--)//s_d2
            sum_d2+=a[cs++][i];
        //cout<<"r="<<sum_r<<endl<<"c="<<sum_c<<endl;
        //cout<<"zr="<<sum_zr<<endl<<"zc="<<sum_zc<<endl<<"d1="<<sum_d1<<endl<<"d2="<<sum_d2<<endl;
        ans1=sum_r-sum_zr;
        ans2=sum_c-sum_zc;
        if(ans1>0&&ans2>0&&ans1==ans2)
        {
            a[zr][zc]=ans1;
            rs=0;
            cs=0;
            sum_d1=0;
            sum_d2=0;
            for(i=0; i<n; i++)//s_d1
                sum_d1+=a[rs++][i];
            for(i=n-1; i>=0; i--)//s_d2
                sum_d2+=a[cs++][i];
            if(sum_d1==sum_d2)
                printf("%llu",ans1);
            else
                printf("-1");
        }
        else if(ans1<=0||ans2<=0)
            printf("-1");
    }
    return 0;
}
