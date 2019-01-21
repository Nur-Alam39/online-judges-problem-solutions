#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[10000];
    scanf("%s",&a);
    int f=1;
    for(int i=0;a[i];i++)
    {
        if(a[i]=='H'||a[i]=='Q'||a[i]=='9')
        {
            f=0;
            printf("YES");
            break;
        }
    }
    if(f==1)
        printf("NO");
    return 0;
}
