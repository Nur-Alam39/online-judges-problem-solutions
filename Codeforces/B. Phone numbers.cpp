#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    char ch;
    scanf("%d%c",&n,&ch);
    char a[n+1];
    scanf("%s",&a);
    if(n%2==0)
    {
        for(int i=0; a[i]; i+=2)
        {
            printf("%c%c",a[i],a[i+1]);
            if(i<n-2)
                printf("-");
        }
    }
    else
    {
        for(int i=0; i<=n-4; i+=2)
        {
            printf("%c%c",a[i],a[i+1]);
            if(i<n-2)
                printf("-");
        }
        printf("%c%c%c",a[n-3],a[n-2],a[n-1]);
    }
    return 0;
}
