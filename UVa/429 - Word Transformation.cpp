#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,l,df,i,k;
    scanf("%d",&tc);
    while(tc--)
    {
        vector<string>a;
        char x[20],s[20],d[20];
        while(scanf("%s",&x)&&x[0]!='*')a.push_back(x);
        l=a.size();
        while(scanf("%s%s",&s,&d)==2&&(s!=""||d!=""))
        {
            map<string,int>edge;
            queue<string>q;
            string u,v;
            edge[s]=0,q.push(s);
            while(!q.empty()&&edge[d]==0)
            {
                u=q.front(),q.pop();
                for(i=0; i<l; i++)
                {
                    v=a[i];
                    if(u.length()==v.length()&&edge[v]==0)
                    {
                        for(k=0,df=0; k<u.length(); k++)if(v[k]!=u[k])df++;
                        if(df==1)edge[v]=edge[u]+1,q.push(v);
                    }
                }
            }
            printf("%s %s %d\n",s,d,edge[d]);
        }
    }
    return 0;
}
