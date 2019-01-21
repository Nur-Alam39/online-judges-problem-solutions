#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("out.txt","w",stdout);
    int tc;
    scanf("%d",&tc);
    while(tc--)
    {
        int n,x=0,d;
        char c;
        scanf("%d%c",&n,&c);
        string a,b;
        int p[n];
        for(int i=0; i<n; i++)
        {
            cin>>a;
            if(a=="LEFT")
                p[i]=-1;
            else if(a=="RIGHT")
                p[i]=1;
            else
            {
                cin>>b>>d;
                p[i]=p[d-1];
            }
            x+=p[i];
        }
        printf("%d\n",x);
    }
    return 0;
}
