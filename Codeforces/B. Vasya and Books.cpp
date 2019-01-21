#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],b[n],l=0,c;
    for(int i=0;i<n;i++)scanf("%d",&a[i]);
    for(int i=0;i<n;i++)scanf("%d",&b[i]);
    for(int i=0;i<n;i++)
    {
        c=0;
        for(int p=0,j=l;j<n;j++,p++)
        {
            if(a[j]==b[i])
                {
                    l+=p+1,printf("%d ",p+1),c=1;
                    break;
                }
        }
        if(c==0)printf("0 ");
    }
    return 0;
}





