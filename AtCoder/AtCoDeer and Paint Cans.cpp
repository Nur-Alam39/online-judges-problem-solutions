#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    set<int>d;
    scanf("%d%d%d",&a,&b,&c);
    d.insert(a),d.insert(b),d.insert(c);
    printf("%d\n",d.size());
    return 0;
}


