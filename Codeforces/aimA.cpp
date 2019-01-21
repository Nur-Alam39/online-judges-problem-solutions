#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    cin.ignore();
    string a[n+1];
    int x=0,r=1,c=1,B=0,ad;
    for(int i=0; i<n; i++)cin>>a[i];
    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
            if(a[i][j]=='B')
            {
                B++;
                if(x==0)r=i+1,c=j+1,x=1;
            }
    if(B==1)printf("%d %d",r,c);
    else
    {
        ad=sqrt(B);
        ad/=2;
        printf("%d %d",r+ad,c+ad);
    }
    return 0;
}
