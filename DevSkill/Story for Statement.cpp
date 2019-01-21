#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    scanf("%d",&tc);
    while(tc--)
    {
        char a[200];
        scanf("%s",&a);
        int p=0,r=0,o=0,g=0,ac=0,m=0,ic=0,n=0,c=0,d=0;
        int l=strlen(a);
        for(int i=0;i<l;i++)
        {
            if(a[i]=='p')p++;
            else if(a[i]=='r')r++;
            else if(a[i]=='o')o++;
            else if(a[i]=='g')g++;
            else if(a[i]=='a')ac++;
            else if(a[i]=='m')m++;
            else if(a[i]=='i')ic++;
            else if(a[i]=='n')n++;
            else if(a[i]=='c')c++;
            else if(a[i]=='d')d++;
        }
        //printf("p=%d r=%d o=%d g=%d ac=%d m=%d i=%d n=%d c=%d d=%d\n",p,r,o,g,ac,m,ic,n,c,d);
       if((p>=1&&r>=2&&o>=1&&g>=2&&ac>=1&&m>=2&&ic>=1&&n>=1)||(c>=1&&o>=1&&d>=1&&ic>=1&&n>=1&&g>=1))printf("Yes\n");
       else printf("No\n");
    }
    return 0;
}

