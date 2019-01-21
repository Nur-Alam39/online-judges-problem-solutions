#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b,c,d;
    cin>>a>>b>>c>>d;
    int la,lb,lc,ld;
    la=a.size()-2;
    lb=b.size()-2;
    lc=c.size()-2;
    ld=d.size()-2;
    if((lb/la>=2&&lc/la>=2&&ld/la>=2)||(la/lb>=2&&la/lc>=2&&la/ld>=2))
        printf("A");
    else if((la/lb>=2&&lc/lb>=2&&ld/lb>=2)||(lb/la>=2&&lb/lc>=2&&lb/ld>=2))
        printf("B");
    else if((la/lc>=2&&lb/lc>=2&&ld/lc>=2)||(lc/la>=2&&lc/lb>=2&&lc/ld>=2))
        printf("C");
    else if((la/ld>=2&&lb/ld>=2&&lc/ld>=2)||(ld/la>=2&&ld/lc>=2&&ld/lb>=2))
        printf("D");
    else
        printf("C");
    return 0;
}
