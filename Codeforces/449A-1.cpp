#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a1;
    int n,m,l2,r2;
    char s,c1,c2;
    scanf("%d%d",&n,&m);
    cin>>a1;
    for(int i=0; i<m; i++)
    {
        scanf("%d%d%c%c%c%c",&l2,&r2,&s,&c1,&s,&c2);
        for(int j=l2-1; j<=r2-1; j++)
        {
            if(a1[j]==c1)a1[j]=c2;
        }
    }
    cout<<a1;
    return 0;
}

