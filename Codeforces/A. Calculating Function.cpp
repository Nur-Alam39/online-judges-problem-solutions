#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,s1,s2,r;
    cin>>n;
    r=n/2;
    if(n%2==0)
      cout<<r;
    else
   cout<<-(r+1);
    return 0;
}
