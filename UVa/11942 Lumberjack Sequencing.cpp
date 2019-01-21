#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,as,de;
    scanf("%d",&n);
    int a[n][10];
    for(int i=0; i<n; i++)
        for(int j=0; j<10; j++)
            scanf("%d",&a[i][j]);
    printf("Lumberjacks:\n");
    for(int i=0; i<n; i++)
    {
        as=0,de=0;
        for(int j=0; j<9; j++)
        {
            if(a[i][j]<a[i][j+1])
                as++;
            else
                de++;
        }
        if((as==0&&de==9)||(as==9&&de==0))
            printf("Ordered\n");
        else
            printf("Unordered\n");
    }
    return 0;
}
