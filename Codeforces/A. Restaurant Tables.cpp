#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,one,two,d=0;
    scanf("%d%d%d",&n,&a,&b);
    int g[n];
    one=a;
    two=b;
    int t_r=b*2;
    for(int i=0; i<n; i++)
        scanf("%d",&g[i]);
    for(int i=0; i<n; i++)
    {
        if(g[i]==1)
        {
            if(one>0)
                one--;
            else if(two>0)
                two--,t_r--;
            else if(t_r>0)
               t_r--;
            else
                d++;
        }
        else
        {
            if(two>0)
                two--,t_r-=2;
            else d+=2;
        }
    }
    printf("%d",d);
    return 0;
}
