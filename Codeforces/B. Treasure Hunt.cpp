#include<bits/stdc++.h>
using namespace std;
int n,s,ax=-1,bx=-1,cx=-1;
string a,b,c;
map<char,int>a1,b1,c1;
char p,q,r;
int main()
{
    cin>>n>>a>>b>>c;
    s=a.size();
    if(n>=s)return printf("Draw"),0;
    for(int i=0;i<s;i++)
    {
        a1[a[i]]++,b1[b[i]]++,c1[c[i]]++;
        if(a1[a[i]]>ax)ax=a1[a[i]],p=a[i];
        if(b1[b[i]]>bx)bx=b1[b[i]],q=b[i];
        if(c1[c[i]]>cx)cx=c1[c[i]],r=c[i];
    }
    printf("%d %d %d %c %c %c\n",ax,bx,cx,p,q,r);
    if(n<=s-ax)ax+''b
    return 0;
}
