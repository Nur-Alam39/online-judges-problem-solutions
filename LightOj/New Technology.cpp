#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[4],f=1,n;
    char x,y,z;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d%c%d%c%d%c%d",&a[0],&x,&a[1],&y,&a[2],&z,&a[3]);
        printf("Case %d: ",f++);
        for(int k=0; k<4; k++)
        {
            int oc_ak[10],i=0;
            if(a[k]>=0&&a[k]<8)
                printf("%d",a[k]);
            else
            {
                while(a[k]!=0)
                {
                    oc_ak[i++]=a[k]%8;
                    a[k]=a[k]/8;
                }
                for(int j=i-1; j>=0; j--)
                    printf("%d",oc_ak[j]);

            }
            if(k>=0&&k<3)
                printf(".");
            if(k==3)
                printf("\n");
        }
    }
    return 0;
}
