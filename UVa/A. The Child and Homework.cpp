#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,e=0;
    string A,B,C,D,ans;
    getline(cin,A),getline(cin,B),getline(cin,C),getline(cin,D);
    a=A.size()-2,b=B.size()-2,c=C.size()-2,d=D.size()-2;
    if((a<=2*b&&a<=2*c&&a<=2*d)||(a>=2*b&&a>=2*c&&a>=2*d))ans=A,e++;
    if((b<=2*a&&b<=2*c&&b<=2*d)||(b>=2*a&&b>=2*c&&b>=2*d))ans=B,e++;
    if((c<=2*b&&c<=2*a&&c<=2*d)||(c>=2*b&&c>=2*a&&c>=2*d))ans=C,e++;
    if((d<=2*b&&d<=2*c&&d<=2*a)||(d>=2*b&&d>=2*c&&d>=2*a))ans=D,e++;
    if(e==0||e>1)cout<<"C";
    else cout<<ans;
    return 0;
}
