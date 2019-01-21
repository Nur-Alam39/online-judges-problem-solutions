#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("out.txt","w",stdout);
    int tc,cs=1;
    scanf("%d",&tc);
    while(tc--)
    {
        int ns;
        scanf("%d",&ns);
        cin.ignore();
        string a[1000],rs;
        int d[ns],r,g=1;
        for(int i=0; i<ns; i++)
            cin>>a[i]>>d[i];
        cin>>r;
        cin.ignore();
        cin>>rs;
        for(int i=0; i<ns; i++)
        {
            if(a[i]==rs)
            {
                g=0;
                if(d[i]<=r)
                {
                    printf("Case %d: Yesss\n",cs++);
                    break;
                }
                else if(d[i]<=r+5)
                {
                    printf("Case %d: Late\n",cs++);
                    break;
                }
                else if(d[i]>r+5)
                {
                    printf("Case %d: Do your own homework!\n",cs++);
                    break;
                }
            }
        }
        if(g)
            printf("Case %d: Do your own homework!\n",cs++);
    }
    return 0;
}
