#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(scanf("%d",&n)&&n)
    {
        int i,x,a,b,cost=0;
        priority_queue< int,vector <int> ,greater<int> >pq;
        for(i=0; i<n; i++)
        {
            scanf("%d",&x);
            pq.push(x);
        }
        while(!pq.empty())
        {
            a=pq.top();
            pq.pop();
            b=pq.top();
            pq.pop();
            cost+=a+b;
            pq.push(a+b);
        }
        cost-=a+b;
        printf("%ld\n",cost);
    }
    return 0;
}
