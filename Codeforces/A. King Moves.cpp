#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[3];
    scanf("%s",&a);
    if(a[0]=='a'||a[0]=='h')
    {
        if(a[1]=='1'||a[1]=='8')
            printf("3");
        else
            printf("5");
    }
    else if(a[0]=='b'||a[0]=='c'||a[0]=='d'||a[0]=='e'||a[0]=='f'||a[0]=='g')
    {
        if(a[1]=='1'||a[1]=='8')
            printf("5");
        else
            printf("8");
    }
    return 0;
}
