#include<bits/stdc++.h>
#define S 1000100
using namespace std;
int main()
{
    int n,op;
    scanf("%d",&n);
    string ans[n+1];
    ans[0]="";
    char s[S];
    int p=0;
    for(int i=0;i<n;i++)
        {
            scanf("%d",&op);
            if(op==1)
            {
                getchar();
                scanf("%s",&s);
                ans[p]+=s;
                cout<<ans[p]<<endl;
                p++;
            }
            else if(op==2)
            {
                int d;
                scanf("%d",&d);
                ans[p]=ans[p-1].erase(ans[p-1].size()-d);
                cout<<ans[p]<<endl;
                p++;
            }
            else if(op==3)
            {
                int d;
                scanf("%d",&d);
                cout<<ans[p-1][d-1]<<endl;
            }
            else if(op==4)
            {
                cout<<ans[p-1]<<endl;
                p--;
            }
        }
    return 0;
}

