#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("out.txt","w",stdout);
    int n;
    while(scanf("%d",&n)==1&&n)
    {
        int f=0,i=1234*n;
        for(; i*n<=100000; i++)
        {
            int l=i*n,d=i,num,dom,cou[10],m,z=0;
            memset(cou,0,sizeof(cou));
            while(l)
            {
                m=l%10;
                if(cou[m])
                    break;
                else
                {
                    z++;
                    cou[m]=1;
                }
                l/=10;
            }
            if(z==5)
            {
                while(d)
                {
                    m=d%10;
                    if(cou[m])
                        break;
                    else
                    {
                        z++;
                        cou[m]=1;
                    }
                    d/=10;
                }
                if(z==10)
                {
                    num=i*n;
                    dom=i;
                    printf("%d / %d = %d\n",num,dom,n);
                    f++;
                }
                else if(z==9&&cou[0]==0)
                {
                    num=i*n;
                    dom=i;
                    printf("%d / 0%d = %d\n",num,dom,n);
                    f++;
                }
            }
        }
        if(f==0)printf("There are no solutions for %d.\n",n);
        printf("\n");
    }
    return 0;
}
