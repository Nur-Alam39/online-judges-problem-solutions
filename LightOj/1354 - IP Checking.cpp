#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,cs=1;
    scanf("%d",&tc);
    cin.ignore();
    while(tc--)
    {
        char a[100],b[100];
        scanf("%s",&a);
        cin.ignore();
        scanf("%s",&b);
        int f[5]= {0},s[5]= {0};
        int fl=strlen(a),sl=strlen(b);
        int m=1,j=3;
        for(int i=fl-1; i>=0; i--)
        {
            if(a[i]=='.')
            {
                m=1,j--;
                continue;
            }
            f[j]+=m*(a[i]-'0'),m*=10;
        }
        m=1,j=3;
        for(int i=sl-1; i>=0; i--)
        {
            if(b[i]=='.')
            {
                m=1,j--;
                continue;
            }
            s[j]+=m*(b[i]-'0'),m*=2;
        }
        int x=0;
        for(int i=0;i<4;i++)
        {
            if(f[i]!=s[i])
            {
                x=1;
                break;
            }
        }
        if(x)printf("Case %d: No\n",cs++);
        else printf("Case %d: Yes\n",cs++);
    }
    return 0;
}
