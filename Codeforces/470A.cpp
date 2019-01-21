#include<bits/stdc++.h>
using namespace std;
char p[505][505],c;
int a,b;
bool dog(int i,int j)
{
    if((p[i][j-1]=='W')||(p[i][j+1]=='W')||(p[i-1][j]=='W')||(p[i+1][j]=='W'))
        return false;
    return true;
}
int main()
{
    scanf("%d%d%c",&a,&b,&c);
    for(int i=0; i<a; i++)scanf("%s",&p[i]);
    for(int i=0; i<a; i++)
        for(int j=0; j<b; j++)
            if(p[i][j]=='.')p[i][j]='D';
            else if(p[i][j]=='S')
            {
                if(dog(i,j))continue;
                else return printf("No"),0;
            }
    printf("Yes\n");
    for(int i=0; i<a; i++)
    {
        for(int j=0; j<b; j++)printf("%c",p[i][j]);
        printf("\n");
    }
    return 0;
}
