#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    while(getline(cin,a)&&getline(cin,b))
    {
        int as=a.size(),bs=b.size();
        if(as==0||bs==0){printf("\n");continue;}
        map<char,int>ma,mb;
        for(int i=0; i<as; i++)ma[a[i]]++;
        for(int i=0; i<bs; i++)mb[b[i]]++;
        map<char,int>::iterator it;
        vector<char>ans;
        if(as<bs)
        {
            for(it=ma.begin(); it!=ma.end(); it++)
                if(mb[it->first])
                {
                    int p=min((it->second),(mb[it->first]));
                    for(int pb=1; pb<=p; pb++)ans.push_back(it->first);
                }
        }
        else
        {
            for(it=mb.begin(); it!=mb.end(); it++)
                if(ma[it->first])
                {
                    int p=min((it->second),(ma[it->first]));
                    for(int pb=1; pb<=p; pb++)ans.push_back(it->first);
                }
        }
        for(int i=0; i<ans.size(); i++)printf("%c",ans[i]);
        printf("\n");
    }
    return 0;
}
