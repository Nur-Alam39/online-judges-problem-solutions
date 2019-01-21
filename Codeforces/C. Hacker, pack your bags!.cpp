#include<bits/stdc++.h>

#define br 200005

using namespace std;
int main()
{
    int n,x;
    scanf("%d%d",&n,&x);
    int l,r,c;
    vector<pair<int,int> >dc[br];
    vector<pair<int,int> >mn[br];
    for(int i=0; i<n; i++)
    {
        scanf("%d%d%d",&l,&r,&c);
        dc[l].push_back(make_pair((r-l+1),c));
        mn[r].push_back(make_pair((r-l+1),c));
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<dc[i].size(); j++)
        {
            cout<<dc[i][j].first<<" "<<dc[i][j].second;
            printf("\n");
        }
    }
    return 0;
}

