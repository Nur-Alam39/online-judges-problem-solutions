#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    map<int,int>m;
    for(int i=0; i<n; i++)scanf("%d",&a[i]),m[a[i]]++;
    for(int i=0; i<n; i++)
    {
        m[a[i]]--;
        if(m[a[i]]==0)return  printf("%d",a[i]),0;
    }
}

