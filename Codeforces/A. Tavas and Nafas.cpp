#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string a[100]={"zero","one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen","twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};
    scanf("%d",&n);
    if(n>=0&&n<=19)
        cout<<a[n];
    else
    {
      int d,m;
      d=n/10,m=n%10;
      cout<<a[18+d];
      if(m)
        cout<<"-"<<a[n%10];
    }
    return 0;
}

