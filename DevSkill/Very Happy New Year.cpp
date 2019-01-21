#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,i;
    scanf("%d",&tc);
    while(tc--)
    {
        char a[200];
        scanf("%s",&a);
        for(i=12;i<a[i];i++);
        printf("Happy New Year-%d\n",2006+i);
    }
    return 0;
}

