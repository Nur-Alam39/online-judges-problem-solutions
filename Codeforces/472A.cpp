#include<bits/stdc++.h>
using namespace std;
int pos[105],n,f=0,s=0,q=0;
int main()
{
    char c;
    scanf("%d%c",&n,&c);
    char a[n+1];
    scanf("%s",&a);
    for(int i=0,j=1;i<n;i++,j++)
    {
        if(a[i]=='?')pos[i]=1;
        else
        {
            if(a[j-1]==a[j])return printf("No"),0;
        }

    }
    if(a[0]=='?'||a[n-1]=='?')return printf("Yes"),0;
    for(int i=0;i<n;i++)
    {
        if(pos[i]==1)
        {
            if(a[i-1]==a[i+1])return printf("Yes"),0;
        }
        if(pos[i]==1&&pos[i+1]==1)return printf("Yes"),0;
    }
    return printf("No"),0;
}

