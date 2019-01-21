#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    string a[m];
    int r[n],c[m],b=0;
    memset(r,0,sizeof(r));
    memset(c,0,sizeof(c));
    getchar();
    for(int i=0; i<n; i++)
        getline(cin,a[i]);
    for(int i=0; i<n; i++)
        cout<<a[i]<<endl;
    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
        {
            if(a[i][j]=='B')
            {
                b++;
                r[i]++;
                c[j]++;
            }
        }
    return 0;
}

