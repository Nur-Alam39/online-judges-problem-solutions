#include<bits/stdc++.h>
using namespace std;
int kang[27],kiwi[27];
int main()
{
    char a[200],r[20]= {"kangaroo"},g[20]= {"kiwibird"};
    scanf("%s",a);
    for(int i=0; i<8; i++)kang[r[i]-97]++,kiwi[g[i]-97]++;
    int sum1=0,sum2=0;
    for(int i=0; a[i]; i++)
    {
        if(a[i]>=65&&a[i]<=90)a[i]+=32;
        sum1+=kang[a[i]-97],sum2+=kiwi[a[i]-97];
    }
    if(sum1>sum2)printf("Kangaroos\n");
    else if(sum1<sum2)printf("Kiwis\n");
    else printf("Feud continues\n");
    return 0;
}
