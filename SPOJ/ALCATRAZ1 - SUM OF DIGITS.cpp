#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,sum;
    char a[300];
    scanf("%d",&tc);
    getchar();
    while(tc--)
    {
        sum=0;
        scanf("%s",&a);
        for(int i=0; a[i]; i++)
            sum+=a[i]-'0';
        printf("%d\n",sum);
    }
    return 0;
}
