#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b;
    scanf("%d%d%d",&n,&a,&b);
    if(b==0)return printf("%d",a),0;
    int m=abs(b)%n,i,k=-1;
    if(b>0)
    {
        for(i=a;;i++)
        {
            k++;
            if(k==m)return printf("%d",i),0;
            if(i==n)i=0;
        }
    }
    else
    {
        for(i=a;;i--)
        {
            k++;
            if(k==m)return printf("%d",i),0;
            if(i==1)i=n+1;
        }
    }
    return 0;
}

