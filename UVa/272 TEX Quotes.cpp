#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=0;
    char a;
    while(scanf("%c",&a)!=EOF)
    {
        if(a=='"')
        {
            if(n%2==0)
                printf("``");
            else
                printf("''");
            n++;
        }
        else
            printf("%c",a);
    }
    return 0;
}
