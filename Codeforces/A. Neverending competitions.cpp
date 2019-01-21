#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    char h[5],f[5],a[5],in[12];
    string hm[105],ar[105];
    getchar();
    scanf("%s",&h);
    getchar();
    for(int i=0; i<n; i++)
    {
        scanf("%s",&in);
        f[0]=in[0],f[1]=in[1],f[2]=in[2];
        a[0]=in[5],a[1]=in[6],a[2]=in[7];
        a[3]=f[3]='\0';
        hm[i]=f,ar[i]=a;
    }
    if(n==1)
    {
        if(ar[0]==h)
            printf("home");
        else
            printf("contest");
        return 0;
    }
    int hme=0,arr=0;
    for(int i=0; i<n; i++)
    {
        if(ar[i]==h)
            hme++;
        else
            arr++;
    }
    if(hme==arr)
        printf("home");
    else
        printf("contest");
    return 0;
}
