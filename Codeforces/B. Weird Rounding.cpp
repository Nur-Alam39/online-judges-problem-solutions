#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[30],c;
    int b,z=0,t=0;
    scanf("%s%c%d",&a,&c,&b);
    if(a[0]=='0')
        printf("0");
    else
    {
        int l=strlen(a);
        for(int i=0; a[i]; i++)
        {
            if(a[i]=='0')
                z++;
            else
                t++;
        }
        if(z>0)
        {
            if(b>z)
                printf("%d",l-1);
            else
            {
                int cz=0,r=0;
                for(int i=l-1; cz!=b; i--)
                {
                    if(a[i]!='0')
                        r++;
                    else
                        cz++;
                }
                printf("%d",r);
            //printf("%d",t-1);
            }
        }
    }
    return 0;
}
