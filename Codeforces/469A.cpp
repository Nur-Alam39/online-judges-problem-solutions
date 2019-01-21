#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    while(c)
    {
        if(a<b)a+=1,c--;
        else if(a>b)b+=1,c--;
        else
        {
            if(c>=2)a+=1,b+=1,c-=2;
            else if(c==1&&a==b)break;
        }
    }
    printf("%d",2*min(a,b));
    return 0;
}
