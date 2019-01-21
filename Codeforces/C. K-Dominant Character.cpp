#include<bits/stdc++.h>
using namespace std;
string a;
set<char>s;
set<char>::iterator it;
bool Find(int l,int h,char c)
{
    for(int i=l; i<=h; i++)if(a[i]==c)return true;
    return false;
}
int main()
{
    cin>>a;
    s.insert(a.begin(),a.end());
    int l=s.size(),m=a.size(),i=0;
    if(l==1)return printf("1"),0;
    else if(l==m)return printf("%d",m/2+1),0;
    else
    {
        char d[l+1];
        for(it=s.begin(); it!=s.end(); it++)d[i++]=*it;
        for(int len=1; len<=m/2+1; len++)
        {
            bool z[l],p;
            memset(z,true,sizeof(z));
            int f=0;
            for(int i=0; i<m-len&&f<l; i++)
                for(int j=0; j<l; j++)
                    if(z[j])
                    {
                        p=Find(i,i+len,d[j]);
                        if(!p)z[j]=false,f++;
                    }
            for(int v=0;v<l;v++)if(z[v])return printf("%d\n",len+1),0;
        }
    }
    return 0;
}
