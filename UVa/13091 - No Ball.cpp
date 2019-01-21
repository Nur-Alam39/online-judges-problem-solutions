#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,c=1;
    scanf("%d",&tc);
    getchar();
    while(tc--)
    {
        char a[6][6];
        int l,f;
        for(int i=0; i<5; i++)scanf("%s",&a[i]);
        for(int i=0; i<5; i++)
            for(int j=0; j<5; j++)
                if(a[i][j]=='|')
                {
                    l=j;
                    break;
                }
        printf("Case %d: ",c++);
        for(int i=0; i<5; i++)
        {
            for(int j=0; j<5; j++)
            {
                if(a[i][j]=='>')
                {
                    if(j>l)
                        printf("No Ball\n");
                    else printf("Thik Ball\n");
                    break;
                }
                else if(a[i][j]=='<')
                {
                    if(j<l)
                        printf("No Ball\n");
                    else printf("Thik Ball\n");
                    break;
                }
            }
        }

    }
    return 0;
}
