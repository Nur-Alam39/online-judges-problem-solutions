#include<bits/stdc++.h>
using namespace std;
int bS(int arr[],int l,int r,int x)
{
    if (r>=l)
    {
        int mid=l+(r-l)/2;
        if (arr[mid]==x)return mid;
        if (arr[mid]>x)return bS(arr,l,mid-1,x);
        return bS(arr,mid+1,r,x);
    }
    return -1;
}
int main()
{
    //freopen("out.txt","w",stdout);
    int n,q,tc=1;
    while(scanf("%d%d",&n,&q)==2)
    {
        if(!n&&!q)break;
        int a[n],x;
        for(int i=0; i<n; i++)
            scanf("%d",a+i);
        sort(a,a+n);
        printf("CASE# %d:\n",tc++);
        for(int i=0; i<q; i++)
        {
            scanf("%d",&x);
            int p=bS(a,0,n,x);
            if(p==-1)
                printf("%d not found\n",x);
            else
            {
                int j,f=1;
                for(j=p-1; j>=0; j--)
                {
                    if(j==0&&a[j]==x)
                        p=j;
                    else if(a[j]!=x)
                    {
                        p=j+1;
                        break;
                    }
                }
                //if(p==0)p++;
                printf("%d found at %d\n",x,++p);
            }

        }
    }
    return 0;
}
