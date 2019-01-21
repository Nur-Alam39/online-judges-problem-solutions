#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,cas=1,i,n;
    char c;
    scanf("%d",&tc);
    while(tc--)
    {
        i=0;
        vector<int>a;
        while(1)
        {
            scanf("%d%c",&n,&c);
            a.push_back(n);
            if(c=='\n')
                break;
        }
        sort(a.begin(),a.end());
        printf("Case %d: Among %d numbers %d is maximum and %d is minimum\n",cas++,a.size(),a[a.size()-1],a[0]);
    }
    return 0;
}

