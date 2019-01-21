#include<bits/stdc++.h>
using namespace std;
int Bn[1000];
void beauty()
{
    for(int i=1; i<=16; i++)Bn[i]=(pow(2,i)-1)*(pow(2,i-1));
}
int main()
{
    beauty();
    int n;
    scanf("%d",&n);
    for(int i=16; i>=1; i--)if(n%Bn[i]==0) return printf("%d",Bn[i]),0;
}

