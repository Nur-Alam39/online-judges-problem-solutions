#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++)scanf("%d",&a[i]);
    sort(a,a+n);
    bool visit[n];
    memset(visit,true,sizeof(visit));
    int x=n;
    for(int i=0; i<n; i++)
    {
        int p=x;
        for(int j=i+1; j<n; j++)
            if(visit[j])
                if(a[i]<a[j])
                {
                    x--;
                    visit[i]=visit[j]=0;
                    break;
                }
        if(p==x)return printf("%d",x),0;
    }
    return 0;
}

