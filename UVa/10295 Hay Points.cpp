#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n,v,b;
    string a;
    char c[30];
    long long int salary;
    map<string,int>d;
    scanf("%d%d",&m,&n);
    getchar();
    for(int i=0;i<m;i++)
        cin>>a>>b,d[a]=b;
    for(int i=0;i<n;i++)
    {
        salary=0;
        while(scanf("%s",&c)==1)
        {
            if(c[0]=='.')
                break;
            salary+=d[c];
        }
        printf("%lld\n",salary);
    }
    return 0;
}
