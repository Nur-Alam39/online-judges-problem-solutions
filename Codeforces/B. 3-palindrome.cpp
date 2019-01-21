#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    char x[6]={"bbaa"};
    scanf("%d",&n);
    for(int i=0;i<n;)
        for(int j=0;j<4&&i<n;j++,i++)
            printf("%c",x[j]);
    return 0;
}
