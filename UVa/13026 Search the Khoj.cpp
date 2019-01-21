#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,n,c=1;
    scanf("%d",&tc);
    while(tc--)
    {
        char ch;
        scanf("%d%c",&n,&ch);
        char f[n][20],m[20];
        int i=0,counter=0,j,p,n1;
        n1=n;
        while(n1--)
        {
            gets(f[i]);
            i++;
        }
        scanf("%s",&m);
        printf("Case %d:\n",c++);
        int s=strlen(m);
        for(i=0; i<n; i++)
        {
            p=0,counter=0;
            for(j=0; j<s; j++)
            {
                if(m[p]!=f[i][j])
                    counter++;
                p++;
            }
            if(counter<=1)
                printf("%s\n",f[i]);
        }
    }
    return 0;
}

