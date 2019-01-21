#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q,tc=1;
    while(scanf("%d",&n)==1)
    {
        vector<int> a;
        int v;
        for(int i=0; i<n; i++)
        {
            scanf("%d",&v);
            a.push_back(v);
        }
        scanf("%d",&q);

        int x[q];
        for(int i=0; i<q; i++)
            scanf("%d",&x[i]);
        for(int i=0; i<q; i++)
        {
            vector<int>::iterator low,up;
            int m,s;
            low=lower_bound(a.begin(),a.end(),x[i]);
            up=upper_bound(a.begin(),a.end(),x[i]);
            m=low-a.begin();
            s=up-a.begin();
            cout<<a[m]<<" "<<a[s]<<endl;
        }
    }
    return 0;
}

