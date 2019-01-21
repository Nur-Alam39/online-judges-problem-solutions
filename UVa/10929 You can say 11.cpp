#include<bits/stdc++.h>
using namespace std;
int main()
{
    char num[10000];
    while(scanf("%s",&num))
    {
        int i=0,bortoman=0,l,j;
        l=strlen(num);
        for(j=0;num[j]=='0';j++);
        if(j==l)
            break;
        while(num[i])
        {
            bortoman=(bortoman*10)+num[i]-'0';
            if(bortoman>=11)
                bortoman=bortoman%11;
            i++;
        }
        if(bortoman==0)
            printf("%s is a multiple of 11.\n",num);
        else
            printf("%s is not a multiple of 11.\n",num);
    }
    return 0;
}
