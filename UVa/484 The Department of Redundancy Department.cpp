#include<bits/stdc++.h>
using namespace std;
int main()
{
    int c;
    char x;
    map<int,int>a;
    vector<int>f;
    while(scanf("%d%c",&c,&x)==2)
    {
        if(x=='\n')
            break;
        if(a[c]==0)
            f.push_back(c);
        a[c]++;
    }
    for(int i=0; i<f.size(); i++)
        printf("%d %d\n",f[i],a[f[i]]);
    return 0;
}
