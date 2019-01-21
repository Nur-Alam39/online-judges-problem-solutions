#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,l[n];
    scanf("%d",&n);
    string a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        l[i]=a[i].size();
    }
    sort(a,a+n-1);
    for(int i=0;i<n;i++)
        cout<<a[i];
    return 0;
}
