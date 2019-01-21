#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("out.txt","w",stdout);
    int tc,n;
    scanf("%d",&tc);
    while(tc--)
    {
        vector<int>d;
        scanf("%d",&n);
        if(n==1)
            printf("1\n");
        else if(n==0)
            printf("0\n");
        else
        {
            for(int i=9; i>=2; i--)
                while(n%i==0)
                    n/=i,d.push_back(i);
            if(n!=1)
                printf("-1\n");
            else
            {
                sort(d.begin(),d.end());
                for(int i=0; i<d.size(); i++)
                    printf("%d",d[i]);
                printf("\n");
            }
        }
    }
    return 0;
}
