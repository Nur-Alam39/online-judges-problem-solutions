#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q;
    scanf("%d",&n);
    list<int>seqlist[n];
    int lastanswer=0,iq,x,y,s;
    for(int i=0;i<q;i++)
    {
        scanf("%d%d%d",&iq,&x,&y);
        int p=(x^lastanswer)%n;
        if(iq==1)
            seqlist[p].push_back(y);
        else
        {
            s=seqlist[p].size();
            lastanswer=seqlist[p][y%s];
            printf("%d\n",lastanswer);
        }
    }
    return 0;
}
