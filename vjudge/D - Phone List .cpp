#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int tc;
    scanf("%d",&tc);
    while(tc--)
    {
        int n,c=1;
        scanf("%d",&n);
        getchar();
        string a[n+10];
        for(int i=0; i<n; i++)
            cin>>a[i];
        for(int i=0; i<n; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                int p=a[i].compare(0,a[j].size(),a[j]);
                if(p==1)
                {
                    c=0;
                    printf("NO\n");
                    break;
                }
            }
            if(c==0)
                break;
        }
        if(c==1)
            printf("YES\n");

    }
    return 0;
}
