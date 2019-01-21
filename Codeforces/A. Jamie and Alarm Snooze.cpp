#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,h,m;
    scanf("%d%d%d",&x,&h,&m);
    for(int i=0;;i++)
    {
        if((h%10==7)||(m%10==7))return printf("%d",i),0;
        if(m-x<0)m=60-(x-m),h--;
        else m-=x;
        if(h<0)h=23;
    }
}
