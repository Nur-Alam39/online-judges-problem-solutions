#include<bits/stdc++.h>
using namespace std;
int c;
int main()
{
    char a[200];
    scanf("%s",&a);
    for(int i=0; a[i]; i++)
        if(a[i]=='Q')for(int j=i+1; a[j]; j++)
            if(a[j]=='A')for(int k=j+1; a[k]; k++)
                if(a[k]=='Q')c++;
    return printf("%d",c),0;
}
