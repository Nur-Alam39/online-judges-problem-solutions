#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    scanf("%d",&tc);
    while(tc--)
    {
        int n;
        scanf("%d",&n);
        char a[200];
        vector<pair<int,int> >an;
        for(int i=1; i<=n; i++)
        {
            set<char>s;
            scanf("%s",&a);
            int l=0;
            for(int k=0;a[k];k++)l++;
            for(int j=0; j<l; j++)s.insert(a[j]);
            an.push_back(make_pair(s.size(),i));
        }
        sort(an.begin(),an.end());
        vector<int>ans;
        int m=an[0].first;
        ans.push_back(an[0].second);
        for(int i=1; i<n; i++)
        {
            if(m==an[i].first)ans.push_back(an[i].second);
            else if(m<an[i].first)break;
        }
        sort(ans.begin(),ans.end());
        int l=ans.size();
        for(int i=0; i<l; i++)
        {
            printf("%d",ans[i]);
            if(i<l-1)printf(" ");
        }
        printf("\n");
    }
    return 0;
}

