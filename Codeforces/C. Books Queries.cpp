#include<bits/stdc++.h>
#define Size 200010
using namespace std;
int s[Size];
int main()
{
    int n,id,l=-1,r=1,ans;
    char c,ch;
    scanf("%d",&n);
    getchar();
    scanf("%c%c%d",&c,&ch,&id);
    s[id]=0,n--;
    while(n--)
    {
        getchar();
        scanf("%c%c%d",&c,&ch,&id);
        if(c=='L')s[id]=l--;
        else if(c=='R')s[id]=r++;
        else
        {
            ans=min(abs(s[id]-l),abs(s[id]-r));
            printf("%d\n",--ans);
        }
    }
    return 0;
}


