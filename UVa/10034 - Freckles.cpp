#include<bits/stdc++.h>
#define M 300
using namespace std;
vector<pair<float,pair<int,int> > >edg;
int p[M];
int Find(int x)
{
    if(p[x]==x)
        return x;
    return Find(p[x]);
}
void Union(int x,int y)
{
    int a,b;
    a=Find(x),b=Find(y);
    if(a!=b)
        p[a]=b;
}
void init(int n)
{
    for(int i=1; i<=n; i++)
        p[i]=i;
}
float mst(int n)
{
    int s=edg.size(),c=0;
    float mst_value=0;
    for(int i=0; i<s; i++)
    {
        int u,v;
        float w;
        u=edg[i].second.first;
        v=edg[i].second.second;
        w=edg[i].first;
        if(Find(u)!=Find(v))
        {
            Union(u,v);
            mst_value+=w;
            //printf("%d %d -> %f\n",u,v,w);
            c++;
            if(c==n-1)
                break;
        }
    }
    //printf("Total edges: %d\n",c);
    return mst_value;
}
int main()
{
    int tc;
    scanf("%d",&tc);
    while(tc--)
    {
        edg.clear();
        int n,r=0;
        scanf("%d",&n);
        float x[n+1],y[n+1],d;
        for(int i=1; i<=n; i++)
            scanf("%f%f",&x[i],&y[i]);
        init(n);
        for(int i=1; i<=n; i++)
            for(int j=i+1; j<=n; j++)
            {
                //printf("(x1,y1)=(%f %f) (x2,y2)=(%f %f) ",x[i],y[i],x[j],y[j]);
                float d=sqrt(((x[i]-x[j])*(x[i]-x[j]))+((y[i]-y[j])*(y[i]-y[j])));
                //printf("d=%f\n",d);
                edg.push_back(make_pair(d,make_pair(i,j)));
            }
        sort(edg.begin(),edg.end());
        //for(int i=0;i<edg.size();i++)
            //cout<<edg[i].second.first<<"->"<<edg[i].second.second<<":"<<edg[i].first<<endl;
            printf("%.2f\n",mst(n));
            if(tc)printf("\n");
    }
    return 0;
}
