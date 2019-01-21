#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[600];
    scanf("%s",&a);
    int k=97;
    for(int i=0;a[i];i++)
    {
        if(a[i]==k)
            k++;
        else if(a[i]>k)
        {
            printf("NO");
            return 0;
        }
    }
    printf("YES");
    return 0;
}
