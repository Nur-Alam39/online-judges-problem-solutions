#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,cs=1;
    char s,a[2000];
    scanf("%d",&tc);
    while(tc--)
    {
        int l,c=0;
        scanf("%d%c%s",&l,&s,&a);
        for(int i=0; i<l; i++)
            if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
            {
                c++;while(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')i++;
            }
        printf("Case %d: %d\n",cs++,c);
    }
    return 0;
}
