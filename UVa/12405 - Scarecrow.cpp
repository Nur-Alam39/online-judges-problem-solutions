#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,p=1;
    scanf("%d",&t);
    while(t--)
    {
        int n,c=0;
        char m;
        scanf("%d%c",&n,&m);
        string a;
        getline(cin,a);
        for(int i=0;i<=n;)
        {
            if(a[i]=='.')
            {
                c++;
                i+=3;
            }
            else
                i++;
        }
        printf("Case %d: %d\n",p++,c);
    }
    return 0;
}
