#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("out.txt","w",stdout);
    int tc;
    scanf("%d",&tc);
    while(tc--)
    {
        int n,q,tk;
        scanf("%d",&n);
        cin.ignore();
        string a[n],mak;
        int b[n],e[n];
        for(int i=0; i<n; i++)
            cin>>a[i]>>b[i]>>e[i];
        scanf("%d",&q);
        for(int i=0; i<q; i++)
        {
            scanf("%d",&tk);
            int m=0,u=0,g=0;
            for(int j=0; j<n; j++)
            {
                if(tk>=b[j]&&tk<=e[j])
                {
                    m++;
                    g=1;
                    if(m>1)
                    {
                        u=1;
                        break;
                    }
                    mak=a[j];
                }
            }
            if(g&&!u)
                cout<<mak<<endl;
            else cout<<"UNDETERMINED"<<endl;
        }
        if(tc>0)
        cout<<endl;
    }
    return 0;
}

