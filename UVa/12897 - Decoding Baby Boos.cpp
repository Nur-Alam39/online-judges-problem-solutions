#include<bits/stdc++.h>
#define m 1000001
using namespace std;
int main()
{
    int tc,r,l;
    scanf("%d",&tc);
    getchar();
    while(tc--)
    {
        char a[m],x,s,y;
        scanf("%s",&a);
        l=strlen(a);
        scanf("%d",&r);
        getchar();
        while(r--)
        {
            scanf("%c%c%c",&x,&s,&y);
            getchar();
            for(int i=0; i<l; i++)
                if(a[i]==y)
                    a[i]=x;
        }
        printf("%s\n",a);
    }
    return 0;
}

