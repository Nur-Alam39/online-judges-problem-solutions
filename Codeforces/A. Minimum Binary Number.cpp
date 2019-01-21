#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,z=0;
    char c,a[105];
    scanf("%d%c%s",&n,&c,&a);
    if(n==1)return printf("%c",a[0]),0;
    for(int i=0;a[i];i++)if(a[i]=='0')z++;
    printf("1");
    for(int i=0;i<z;i++)printf("0");
    return 0;
}
