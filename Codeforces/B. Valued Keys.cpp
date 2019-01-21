#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[110],b[110];
    scanf("%s%s",&a,&b);
    int l=strlen(a),j=0;
    for(int i=0; i<l; i++)
    {
        if(a[i]<b[i])
        {
            printf("-1");
            return 0;
        }
        else if(a[i]==b[i])a[i]=122;
        else a[i]=b[i];
    }
    printf("%s",a);
    return 0;
}
