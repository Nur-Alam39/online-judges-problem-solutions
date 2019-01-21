#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],c=0,one,zero;
    for(int i=0; i<n; i++)
        scanf("%d",&a[i]);
    for(int i=0; i<n; )
    {
        if(a[i]==1)
            while(a[i]==1)
                c++,i++;
        else
            while(a[i]==0)
                c++,i++;
        break;
    }
    int ok=0;
    for(int i=0; i<n;)
    {
        zero=one=0;
        if(a[i]==1)
        {
            ok++;
            while(a[i]==1)
            {
                one++;
                i++;
            }
            if(one==c)
                continue;
            else
                return printf("NO"),0;
        }
        else
        {
            ok++;
            while(a[i]==0)
            {
                zero++;
                i++;
            }
            if(zero==c)
                continue;
            else
                return printf("NO"),0;
        }
    }
    if(ok>=1)
        return printf("YES"),0;
    else
        return printf("NO"),0;
}
