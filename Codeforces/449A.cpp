#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,l,r;
    string a;
    char s,c1,c2;
    scanf("%d%d",&n,&m);
    cin>>a;
    //cout<<a;
    for(int i=0;i<m;i++)
    {
       scanf("%d%d%c%c%c%c",&l,&r,&s,&c1,&s,&c2);
       l--,r--;
       for(int j=l;j<=r;j++){if(a[j]==c1)a[j]=c2;}
       //cout<<l<<r<<c1<<c2<<endl;
    }
    cout<<a;
    return 0;
}
