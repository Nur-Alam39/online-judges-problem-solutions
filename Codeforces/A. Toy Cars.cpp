#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    int a[n][n],c=0,f=0;
    vector<int>b;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
          scanf("%d",&a[i][j]);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
          if(a[i][j]==0||a[i][j]==-1||a[i][j]==2)
            f=0;
          else
            {
                f=1;
                break;
            }
        }
        if(f==0)
        {
            c++;
            b.push_back(i+1);
        }
    }
    printf("%d\n",c);
    for(int i=0;i<b.size();i++)
        printf("%d ",b[i]);
    return 0;
}
