#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    getchar();
    char a[n+1];
    int b[n];
    scanf("%s",&a);
    int level=0,vally=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]=='U')level++,b[i]=level;
        else if(a[i]=='D')level--,b[i]=level;
    }
    for(int i=0;i<n;i++)
    {
        if(b[i]<0)
        {
            int j=i+1;
            while(b[j]<0&&j<n)j++;
            if(b[j]==0)vally++;
            i=j;
        }
    }
    printf("%d",vally);
    return 0;
}

