#include<bits/stdc++.h>
using namespace std;
int p(long int b[], int n, int a)
{
    int c=0;
    unordered_set<int> s;
    for (int i=0; i<n ; i++)
    {
        if (s.find(a^b[i])!= s.end())
            c++;
        s.insert(b[i]);
    }
    return c;
}
int main()
{
    long int n,a;
    scanf("%ld%ld",&n,&a);
    long int b[n];
    for(int i=0; i<n; i++)
        scanf("%ld",&b[i]);
    printf("%d",p(b,n,a));
    return 0;
}
