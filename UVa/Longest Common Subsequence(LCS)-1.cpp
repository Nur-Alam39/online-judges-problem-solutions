#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string a,b;
    while(getline(cin,a))
    {
        getline(cin,b);
        int s1,s2,i,j;
        s1=a.size();
        s2=b.size();
        int x[s1+1][s2+1];
        for(i=0; i<=s1; i++)
        {
            for(j=0; j<=s2; j++)
            {
                if(i==0||j==0)
                    x[i][j]=0;
                else if(a[i-1]==b[j-1])
                    x[i][j]=1+x[i-1][j-1];

                else
                    x[i][j]=max(x[i-1][j],x[i][j-1]);
            }
        }
        cout<<x[s1][s2]<<endl;
    }
    return 0;
}
