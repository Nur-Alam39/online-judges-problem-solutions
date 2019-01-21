#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,x,sum=0,d;
    scanf("%d%d",&n,&k);
    set<int>num;
    for(int i=0;i<n;i++)
        scanf("%d",&x),num.insert(x);
    set<int>::iterator it;
    for(int i=0;i<k;i++)
    {
        if(num.empty())
        {
            printf("0\n");
            continue;
        }
        it=num.begin(),d=*it-sum;
        num.erase(it),sum+=d;
        printf("%d\n",d);
    }
    return 0;
}

