#include<bits/stdc++.h>
using namespace std;
int r,c;
char a[200][200];
void floodfill(int i,int j)
{
    if(i<-1||i>r-1||j<-1||j>c-1||a[i][j]!='@')
        return;
    a[i][j]='*';
    floodfill(i,j+1);
    floodfill(i,j-1);
    floodfill(i+1,j);
    floodfill(i-1,j);
    floodfill(i+1,j+1);
    floodfill(i+1,j-1);
    floodfill(i-1,j+1);
    floodfill(i-1,j-1);
}
int main()
{
    while(scanf("%d%d",&r,&c)==2)
    {
        if(r==0&&c==0)
            break;
        getchar();
        int o_d=0;
        for(int i=0; i<r; i++)
            scanf("%s",&a[i]);
        for(int i=0; i<r; i++)
            for(int j=0; j<c; j++)
            {
                if(a[i][j]=='@')
                    o_d++;
                floodfill(i,j);
            }
        printf("%d\n",o_d);
    }
    return 0;
}
