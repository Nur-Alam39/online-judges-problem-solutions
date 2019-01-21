#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,k,f[26];
    memset(f,0,sizeof(f));
    scanf("%d%d",&n,&k);
    cin.ignore();
    string a;
    cin>>a;
    for(int i=0; i<a.size(); i++)f[a[i]-97]++;
    for(int i=0; i<26; i++)
    {
        if(f[i]>k)
        {
            printf("NO");
            return 0;
        }
    }
    printf("YES");
    return 0;
}
