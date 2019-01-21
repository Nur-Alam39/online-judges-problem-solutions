#include<bits/stdc++.h>
#define M 100003
using namespace std;
int a[3][3],r1,r2,r3,c1,c2,c3,d1,d2;
int main()
{
    for(int i=0; i<3; i++)
        for(int j=0; j<3; j++)
            scanf("%d",&a[i][j]);
    for(int m=0; m<=M; m++)
    {
        a[0][0]=m;
        for(int p=0; p<=M; p++)
        {
            a[1][1]=p;
            printf("first:\n");
                for(int i=0; i<3; i++)
                {
                    for(int j=0; j<3; j++)
                        printf("%d ",a[i][j]);
                    printf("\n");
                }
            r1=a[0][0]+a[0][1]+a[0][2];
            r2=a[1][0]+a[1][1]+a[1][2];
            c1=a[0][0]+a[1][0]+a[2][0];
            c2=a[0][1]+a[1][1]+a[2][1];
            d2=a[2][0]+a[1][1]+a[0][2];
            if(a[0][0]+a[1][1]==a[0][2]+a[1][2]&&a[0][2]+a[1][2]==a[2][0]+a[2][1])
            {
                a[2][2]=r1-a[0][2]+a[1][2];

                r3=a[2][0]+a[2][1]+a[2][2];
                c3=a[0][2]+a[1][2]+a[2][2];
                d1=a[0][0]+a[1][1]+a[2][2];
                printf("\n\nsecond:\n");
                for(int i=0; i<3; i++)
                {
                    for(int j=0; j<3; j++)
                        printf("%d ",a[i][j]);
                    printf("\n");
                }
                if(r1==r2&&r2==r3&&r3==c1&&c1==c2&&c2==c3&&c3==d1&&d1==d2&&d2==r1)
                {
                    for(int i=0; i<3; i++)
                    {
                        for(int j=0; j<3; j++)
                            printf("%d ",a[i][j]);
                        printf("\n");
                    }
                    return 0;
                }
            }
        }
        a[0][0]=a[1][1]=a[2][2]=0;
    }
    return 0;
}

