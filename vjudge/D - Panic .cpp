#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[20000];
    scanf("%s",&a);
    int l,i,j;
    for(i=0; a[i]; i++)l++;
    for(i=0; a[i]=='A'; i++);
    if(!i)return printf("No panic"),0;
    if(i)
    {
        for(j=i; a[j]=='!'; j++);
        if(j>i&&j==l)
            printf("Panic!");
        else
            printf("No panic");
    }
    return 0;
}
