#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string a;
    cin>>a;
    int c=0,i,j,d=0,mn=0,b[100]= {0};
    for(i=0; i<a.size(); i++)
    {
        if(a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U'||a[i]=='Y')
            b[c++]=i;
    }
    if(c==1)
        printf("%d",b[0]+1);
    else if(c==0)
        printf("%d",a.size()+1);
    else
    {
        for(i=0; i<c; i++)
        {
            d=b[i+1]-b[i];
            mn=max(d,mn);
        }
        printf("%d",mn);
    }
    return 0;
}
