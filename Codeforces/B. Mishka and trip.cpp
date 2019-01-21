#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,k;
    cin>>n>>k;
    int a[n+1],c[k+1],p[n+1],q[n+1];
    long long int sum=0;
    for(int i=1; i<=n; i++)
        cin>>a[i];
    for(int i=1; i<=k; i++)
        cin>>c[i];
    for(int i=1; i<=n; i++)
        p[i]=q[i]=-1;
    for(int j=1; j<=n; j++)
    {

        if(j==n)
        {
            cout<<j<<"->1"<<"="<<a[j]*a[1]<<"\n";
            sum+=a[j]*a[1];
        }
        else
        {
            cout<<j<<"->"<<j+1<<"="<<a[j]*a[j+1]<<"\n";
            sum+=a[j]*a[j+1];
        }
    }
    cout<<sum<<endl;
    for(int i=1; i<=k; i++)
    {
        cout<<"2nd part-1st loop:\n";
        for(int j=c[i]-2; j>=1; j--)
        {
            cout<<c[i]<<"->"<<j<<"="<<a[c[i]]*a[j]<<"\n";
            if(p[j]==-1&&q[c[i]]==-1)
            {
                sum+=a[c[i]]*a[j];
                p[i]=q[c[i]]=0;
            }
        }
        cout<<"2nd part-2nd loop:\n";
        for(int j=c[i]+2; j<=n; j++)
        {
            cout<<c[i]<<"->"<<j<<"="<<a[c[i]]*a[j]<<"\n";
            if(c[i]==1&&j==n)
                sum+=0;
            else
            {

                if(p[j]==-1&&q[c[i]]==-1)
                {
                    sum+=a[c[i]]*a[j];
                    p[i]=q[c[i]]=0;
                }
            }
        }
    }
    cout<<sum;
    return 0;
}


