#include<bits/stdc++.h>
using namespace std;
int main()
{
    char c[300];
    scanf("%s",&c);
    int k;
    scanf("%d",&k);
    int l=0,candy=0,snow=0,snow_p;
    for(int i=0;c[i];i++)
        {
            if(c[i]=='?')candy++;
            else if(c[i]=='*')snow++;
            else l++;
        }
    if(k==l)
    {
        for(int i=0;c[i];i++)
        {
            if(c[i]=='?')continue;
            else if(c[i]=='*')continue;
            else printf("%c",c[i]);
        }
    }
    else if(k>l)
    {
        if(snow)
        {
            int r=k-l,f=1;
            for(int i=0; c[i]; i++)
            {
                if(c[i]=='?')continue;
                else if(c[i]=='*'&&f==1)
                {
                    for(int j=0;j<r;j++)printf("%c",c[i-1]);
                    f=0;
                }
                else printf("%c",c[i]);
            }
        }
        else printf("Impossible");
    }
    else if(k<l)
    {
        if(l-candy<=k)
        {

        }
    }
    return 0;
}

