#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,w,f=1,s=2,d=3,temp;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++)scanf("%d",&a[i]);
    for(int i=0; i<n; i++)
    {
        w=a[i];
        if(w==f||w==s)
        {
            if(w==f)f=f,temp=s,s=d,d=temp;
            else temp=f,f=s,s=d,d=temp;
        }
        else return printf("NO"),0;
    }
    return printf("YES"),0;
}
