#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[20];
    scanf("%s",&a);
    for(int i=0; i<4; i++)
        printf("%c",a[i]);
    printf(" ");
    for(int i=4; i<12; i++)
        printf("%c",a[i]);
    printf("\n");
    return 0;
}
