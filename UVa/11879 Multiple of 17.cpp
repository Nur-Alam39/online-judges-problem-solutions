#include<bits/stdc++.h>
using namespace std;
int main()
{
    char num[10000];
    while(scanf("%s",&num)&&num[0]!='0')
    {
        int i=0,temp=0;
        while(num[i])
        {
            temp=(temp*10)+num[i]-'0';
            if(temp>=17)
                temp=temp%17;
            i++;
        }
        if(temp==0)
            printf("1\n");
        else
            printf("0\n");
    }
    return 0;
}
