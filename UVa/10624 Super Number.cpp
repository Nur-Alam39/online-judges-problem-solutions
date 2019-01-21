#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,c=0;
    scanf("%d",&tc);
    while(tc--)
    {
        int n,m;
        scanf("%d%d",&n,&m);
        int a[m+1],k=0,z=n,d=n+1;
        int v=1;
        if(n<10)a[1]=n,v++;
        else a[1]=n/10,a[2]=n%10,v+=2;
        for(int i=v; i<=z; i++)a[i]=0;
        for(int i=1; i<=z; i++)printf("%d",a[i]);
        for(int i=z+1; i<=m; i++,d++)
        {
            printf("d=%d\n",d);
            for(int j=0; j<=9; j++)
            {
                a[i]=j;
                printf("a= ");
                for(int f=0; f<=i; f++)printf("%d",a[f]);
                int p=1,r,q,x=a[1];
                cout<<endl;
                printf("x= ");
                for(int s=2; x<d&&s<=i; s++,p++)
                    x=(x*pow(10,p))+a[s];

                printf("\nd=%d x=%d\n",d,x);

            }
        }
    }
    return 0;
}
