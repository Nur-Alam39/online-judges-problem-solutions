#include<bits/stdc++.h>
using namespace std;
char a[1005],c;
string s;
int tc,cs=1;
int main()
{
    scanf("%d%c",&tc,&c);
    while(tc--)
    {
        scanf("%s",&a);
        printf("Case #%d -> ",cs++);
        for(int i=0;a[i]!='.';i++)
            if(a[i]>=65&&a[i]<=91)
            {
                s="",s+=a[i],i++;
                while(a[i]>=97&&a[i]<=122)s+=a[i],i++;
                cout<<s;
                if(a[i]!='.')printf(" ");
                i--;
            }
        if(tc)printf("\n");
    }
    return 0;
}
