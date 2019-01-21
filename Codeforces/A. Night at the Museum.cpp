#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[200],b[28]={"abcdefghijklmnopqrstuvwxyz"};
    scanf("%s",&a);
    int r=0,s=0,cp1,cp2,cp,cp3;
    cp1=a[0]-97;
    cp2=abs(a[0]-97-25);
    cp=min(cp1,cp2);
    r+=cp;
    printf("cp=%d r=%d\n",cp,r);
    for(int i=1;a[i];i++)
    {
        cp1=cp+a[i]-97;
        cp2=abs(a[i]-97-cp);
        cp3=min(cp1,cp2);
        r+=cp3;
        //r=min()
        printf("cp3=%d r=%d\n",cp3,r);
    }
    printf("r=%d\n",r);
    return 0;
}

