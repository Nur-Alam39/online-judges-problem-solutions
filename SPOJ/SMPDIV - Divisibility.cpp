#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    scanf("%d",&tc);
    while(tc--)
    {
        int n,x,y;
        scanf("%d%d%d",&n,&x,&y);
        for(int i=2;i<n;i++)
        {
            if(i%x==0&&i%y!=0)
                printf("%d ",i);
        }
        printf("\n");
    }
    return 0;
}
