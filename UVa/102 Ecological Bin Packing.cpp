#include<bits/stdc++.h>
using namespace std;
int main()
{
    int b[3],g[3],c[3],m[6],mx=INT_MAX;
    string s[6],st;
    while(scanf("%d%d%d%d%d%d%d%d%d",&b[0],&g[0],&c[0],&b[1],&g[1],&c[1],&b[2],&g[2],&c[2])!=EOF)
    {
        m[0]=b[1]+b[2]+g[0]+g[1]+c[0]+c[2],s[0]="BCG";
        m[1]=b[1]+b[2]+g[0]+g[2]+c[0]+c[1],s[1]="BGC";
        m[2]=b[0]+b[2]+g[0]+g[1]+c[1]+c[2],s[2]="CBG";
        m[3]=b[0]+b[1]+g[0]+g[2]+c[1]+c[2],s[3]="CGB";
        m[4]=b[0]+b[2]+g[1]+g[2]+c[0]+c[1],s[4]="GBC";
        m[5]=b[0]+b[1]+g[1]+g[2]+c[0]+c[2],s[5]="GCB";
        mx=m[0];
        st=s[0];
        for(int i=1; i<6; i++)
            if(m[i]<mx)
                mx=m[i],st=s[i];
        cout<<st<<" "<<mx<<endl;
    }
    return 0;
}
