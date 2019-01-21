#include<bits/stdc++.h>
using namespace std;
int main()
{
    int w[4];
    scanf("%d%d%d%d",&w[0],&w[1],&w[2],&w[3]);
    getchar();
    char a[4],s;
    scanf("%c%c%c%c%c",&a[0],&s,&a[1],&s,&a[2]);
    printf("%c %c %c\n",a[0],a[1],a[2]);
    if(a[0]=='+'&&a[1]=='+'&&a[2]=='+')
        printf("%d\n",w[0]+w[1]+w[2]+w[3]);
    else if(a[0]=='*'&&a[1]=='*'&&a[2]=='*')
        printf("%d\n",w[0]*w[1]*w[2]*w[3]);
    if(a[0]=='+')
    {
        r1=min(min((w[0]+w[1]),(w[0]+w[2])),(w[0]+w[3]));
        r1=min(r1,min((w[1]+w[2]),(w[1]+w[3])));
        r1=min(r1,(w[2]+[3]));
    }
    return 0;
}
