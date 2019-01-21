#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,n1,b,flag=0;
    vector<int>l;
    scanf("%d%d",&n,&m);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&n1);
        for(int j=0; j<n1; j++)
        {
            scanf("%d",&b);
            l.push_back(b);
        }
    }
    for(int j=1; j<=m; j++)
    {
        for(int i=0; i<l.size(); i++)
        {
            if(j==l[i])
            {
                flag=1;
                break;
            }
            else
                flag=0;
        }
        if(flag==0)
        {
            printf("NO");
            break;
        }
    }
    if(flag==1)
        printf("YES");
    return 0;
}

