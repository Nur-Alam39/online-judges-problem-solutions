#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[200];
    while(scanf("%s",&a)!=EOF)
    {
        int l=strlen(a);
        if(l==1)printf("81\n");
        else
        {
            for(int i=1;i<=l-1;i++)printf("9");printf("8");
            for(int i=1;i<=l-1;i++)printf("0");printf("1\n");
        }
    }
    return 0;
}
