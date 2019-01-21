#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,c,ns=0;
    scanf("%d%d%d",&n,&a,&b);
    char s[n+1];
    scanf("%s",&s);
    for(int i=0; i<n; i++)
    {
        if(s[i]=='.'&&s[i+1]!='.')
        {
            s[i]='*';
            if(a>b)ns++,a--;
            else ns++,b--;
        }
    }
    for(int i=0; i<n;)
    {
        if(s[i]=='.')
        {
            if(a||b)
            {
                int p=1;
                    while(s[i]=='.')
                    {
                        if(p==1)
                            {if(a)a--,ns++,p=0;}
                        else
                            {if(b)b--,ns++,p=1;}
                        i++;
                    }
            }
        }
        else
            i++;
    }
    printf("%d",ns);
    return 0;
}

