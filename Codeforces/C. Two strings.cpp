#include<bits/stdc++.h>
#define ss 1000000
using namespace std;
void lcs( char *x, char *y, int m, int n )
{
    int L[m+1][n+1];
    for (int i=0; i<=m; i++)
    {
        for (int j=0; j<=n; j++)
        {
            if (i == 0 || j == 0)
                L[i][j] = 0;
            else if (x[i-1] == y[j-1])
                L[i][j] = L[i-1][j-1] + 1;
            else
                L[i][j] = max(L[i-1][j], L[i][j-1]);
        }
    }
    int index=L[m][n];
    char l[index+1];
    l[index]='\0';
    int i= m,j=n;
    while(i>0&&j>0)
    {
        if(x[i-1]==y[j-1])
        {
            l[index-1]=x[i-1];
            i--,j--,index--;
        }

        else if(L[i-1][j]>L[i][j-1])
            i--;
        else
            j--;
    }
    if(strlen(l)>0)
        printf("%s",l);
    else
        printf("-");
}
int main()
{
    char x[ss],y[ss],s;
    int m,n;
    scanf("%s%c%s",&x,&s,&y);
    m=strlen(x);
    n=strlen(y);
    lcs(y, x, m, n);
    return 0;
}
