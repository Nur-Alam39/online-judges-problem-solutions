#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    char c;
    scanf("%d%c",&n,&c);
    char a[n+4];
    int v[n],j=0,m=0,b=0;
    scanf("%s",&a);
    for(int i=0; i<n; i++)
    {
        if(a[i]=='B')
            b++;
        else
        {
            if(b!=0)
            {
                v[j]=b;
                b=0;
                j++;
                m++;
            }

        }
    }
    if(b!=0)
        v[j]=b,j++,m++;
    printf("%d\n",m);
    for(int i=0; i<j; i++)
        printf("%d ",v[i]);
    return 0;
}

