#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    scanf("%d",&tc);
    cin.ignore();
    while(tc--)
    {
        int n;
        scanf("%d",&n);
        string s[n+5];
        for(int i=0;i<n;i++)cin>>s[i];
        sort(s,s+n);
        int i=0,c=0,j,k;
        while(s[0][i]==s[1][i])i++;
        c+=i+1,i=0;
        while(s[n-1][i]==s[n-2][i])i++;
        c+=i+1;
        for(int i=1;i<n-1;i++)
        {
           k=0,j=0;
           while(s[i][k]==s[i-1][k])k++;
           while(s[i][j]==s[i+1][j])j++;
           c+=max(k,j)+1;
        }
        printf("%d\n",c);
    }
    return 0;
}

