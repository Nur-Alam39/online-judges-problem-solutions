#include<bits/stdc++.h>
using namespace std;
int r,c;
char a[100][100];
int visited[100][100];
int di[8]= {0, 0,1,-1,1, 1,-1,-1};
int dj[8]= {1,-1,0, 0,1,-1, 1 -1};
int main()
{
    int tc;
    scanf("%d",&tc);
    getchar();
    while(tc--)
    {
        int i=0;
        while(scanf("%s",&a[i])==1)
        {
            c=strlen(a[0]);
            if(c==0)
                break;
            printf("%s i=%d l=%d\n",a[i],i,c);
            i++;
        }
        r=i;
        for(int j=0; j<i; j++)
            printf("%s\n",a[j]);
    }
    return 0;
}
