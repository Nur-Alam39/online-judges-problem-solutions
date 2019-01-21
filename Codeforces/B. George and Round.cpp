#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    long int a[n],b;
    for(int i=0; i<n; i++)
        scanf("%ld",&a[i]);
    set<long int > s;
    for(int i=0; i<m; i++)
    {
        scanf("%ld",&b);
        s.insert(b);
    }
    int mn=0;
    set< long int > :: iterator it;
    for(it = s.begin(); it != s.end(); it++)
    {
        for(int j=0; j<n; j++)
            if(*it==a[j])
            {
                mn++;
                break;
            }
    }
    printf("%d",mn);
    return 0;
}
