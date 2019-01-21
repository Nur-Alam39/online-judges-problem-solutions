#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    char c;
    scanf("%d%c",&n,&c);
    char a[n+1][10],ch;
    for(int i=0; i<n; i++)
        for(int j=0; ; j++)
        {
            scanf("%c",&ch);
            if(ch=='\n')
                break;
            a[i][j]=ch;
        }
    int f=1;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<5; j++)
        {
            if(a[i][j]=='O'&&a[i][j+1]=='O')
            {
                a[i][j]='+';
                a[i][j+1]='+';
                f=0;
                break;
            }
        }
        if(f==0)
            break;
    }
    if(f==1)
        printf("NO");
    else
    {
        printf("YES\n");
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<5; j++)
                printf("%c",a[i][j]);
            cout<<endl;
        }

    }

    return 0;
}
