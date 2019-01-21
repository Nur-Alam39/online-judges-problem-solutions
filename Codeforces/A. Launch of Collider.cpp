#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    long int a[n];
    char d[n+1];
    vector<long int>m;
    scanf("%s",&d);
    for(int i=0; i<n; i++)
        scanf("%ld",&a[i]);
    n=1;
    for(int i=0; d[i]; i++)
    {
        if(d[i]=='R'&&d[i+1]=='L')
        {
            m.push_back(a[i+1]-a[i]);
            n=0;
        }
    }
    if(n==0)
    {
        sort(m.begin(),m.end());
        printf("%ld",m[0]/2);
    }
    else
        printf("-1");
    return 0;
}
