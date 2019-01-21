#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,f;
    scanf("%d%d",&a,&b);
    if(a==0&&b==0)
        printf("NO");
    else
    {
        f=abs(a-b);
        if(f==0||f==1)
            printf("YES");
        else
            printf("NO");
    }
    return 0;
}

