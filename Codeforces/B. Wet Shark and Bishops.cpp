#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],b[n],c=0,d;
    char m[n+1],g[n+1];
    for(int i=0; i<n; i++)
        scanf("%d%d",&a[i],&b[i]),m[i]='o';
    for(int i=0; i<n; i++)
    {
        d=abs(a[i]-b[i]),m[i]='x';
        for(int j=0; j<n; j++)
            if(i!=j)
                if(abs(a[j]-b[j]==d)&&(m[j]=='o'))
                {
                    m[j]='x';
                    c++;
                }
    }
    printf("%d",c);
    return 0;
}
