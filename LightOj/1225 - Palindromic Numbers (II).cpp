#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,m=1;
    scanf("%d",&tc);
    string a,c;
    while(tc--)
    {
        ios::sync_with_stdio(0);
        cin.tie(0);
        cin>>a;
        if(a.size()==1)
            printf("Case %d: Yes\n",m++);
        else
        {
            c=a;
            reverse(c.begin(),c.end());
            if(a!=c)
                printf("Case %d: No\n",m++);
            else
                printf("Case %d: Yes\n",m++);
        }
    }
    return 0;
}




