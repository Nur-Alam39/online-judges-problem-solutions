#include<bits/stdc++.h>
using namespace std;
int a[3050],n,index;
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)scanf("%d",&index),a[index]=69;
    for(int i=1;i<3050;i++)if(!a[i])return printf("%d",i),0;
}

