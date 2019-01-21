#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,j,f=0,color=0;
    char c;
    scanf("%d%d%c",&n,&m,&c);
    for(i=0; i<n; i++)
    {
        for(j=0;; j++)
        {
            char ch;
            scanf("%c",&ch);
            if(ch=='\n')
                break;
            else if(f==0)
            {
                if(ch=='C'||ch=='M'||ch=='Y')
                {
                    color=1;
                    f=1;
                }
            }
        }
    }
    if(color==1)
        printf("#Color");
    else
        printf("#Black&White");

    return 0;
}
