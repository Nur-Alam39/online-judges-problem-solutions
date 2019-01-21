#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("out.txt","w",stdout);
    int tc;
    cin>>tc;
    cin.ignore();
    cin.ignore();
    while(tc--)
    {
        map<string,int>a;
        string t;
        while(1)
        {
            getline(cin,t);
            if(t=="")break;
            a[t]++;
        }
        int t_n=0;
        float f,ans=0;
        map<string,int>::iterator i;
        for(i=a.begin(); i!= a.end(); i++)
            t_n+=i->second;
        for(i=a.begin(); i!= a.end(); i++)
        {
            ans+=f=(float)i->second*100/t_n;
            cout<<i->first;
            printf(" %.4f\n",f);
        }
        if(tc>0)
        printf("\n");
    }
    return 0;
}
