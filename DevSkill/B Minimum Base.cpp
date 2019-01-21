#include<bits/stdc++.h>
using namespace std;
int main()
{
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    int tc,cs=1;
    string x="0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    scanf("%d",&tc);
    while(tc--)
    {
        string a;
        cin>>a;
        sort(a.begin(),a.end());
        int l=a.size()-1;
        if(a[l]=='1'||a[l]=='0')printf("Case %d: 2\n",cs++);
        else
        {
            for(int i=2; i<x.size(); i++)
                if(a[l]==x[i])
                {
                    printf("Case %d: %d\n",cs++,i+1);
                    break;
                }
        }
    }
    return 0;
}
