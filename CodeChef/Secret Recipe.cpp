#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    scanf("%d",&tc);
    while(tc--)
    {
        float x1,x2,x3,v1,v2,t1,t2;
        scanf("%f%f%f%f%f",&x1,&x2,&x3,&v1,&v2);
        t1=abs(x1-x3)/v1;
        t2=abs(x2-x3)/v2;
        if(t1<t2)printf("Chef\n");
        else if(t1>t2)printf("Kefa\n");
        else printf("Draw\n");
    }
    return 0;
}
