#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[100];
    int f=0;
    scanf("%s",&a);
    for(int i=0; a[i]; i++)
        if(a[i]=='4'||a[i]=='7')
            f++;
    if(f==4||f==7)
        printf("YES");
    else
        printf("NO");
    return 0;
}
