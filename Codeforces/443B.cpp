#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,p=0,m,g;
    deque<int>dq;
    long long int k,ans=0;
    scanf("%d%lld",&n,&k);
    for(int i=0; i<n; i++)scanf("%d",&x),dq.push_back(x);
    while(1)
    {
        m=dq.front(),dq.pop_front();
        g=dq.front(),dq.pop_front();
        if(m>g)p++,ans++;
        else swap(g,m),p=0,ans=1;
        dq.push_back(g);
        dq.push_front(m);
        if(p==n-1||ans==k)return printf("%d",dq.front()),0;
    }
    return 0;
}

