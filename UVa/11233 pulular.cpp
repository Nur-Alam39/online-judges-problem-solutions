#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    while(scanf("%d %d",&n,&m))
    {
        n=n*2;
        string f[n],c[m];
        for(int i=0,j=0; i<n+m; i++)
        {
            if(i<n)
                cin>>f[i];
            else
                cin>>c[j++];
        }
        for(int i=0; i<m; i++)
        {
            for(int j=0; j<n; j+=2)
            {
                if(strcmp(f[i],c[j])==0)
                    cout<<c[j+1];
                else
                {
                    int len=strlen(c[j]);
                    //if()

                }
            }
        }
    }
    return 0;
}
