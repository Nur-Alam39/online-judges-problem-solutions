#include<bits/stdc++.h>
using namespace std;
struct compare_length
{
    bool operator()(const std::string &l, const std::string &r) const
    {
        return l.size()<r.size();
    }
};
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,k,j=0;
    scanf("%d%d",&n,&k);
    string a[n],m[n],pass;
    for(int i=0; i<n; i++)
        cin>>a[i];//,cout<<" " <<a[i]<<endl;
    cin>>pass;
    cout<<"pass="<<pass<<endl;
    sort(a,a+n,compare_length());
    for(int i=0; i<n; i++)
        cout<<a[i]<<endl;
    int ma=0;
    for(int i=0; i<n; i++)
        if(a[i]==pass)
            ma++;
    ///best case
    int ans=1;
    for(int i=0; i<n; i++)
    {
        if(a[i].size()==pass.size())
        {
            int s=1;
            for(int g=1; g<=i; g++)
            {
                if(s<k)
                {
                    ans++;
                    s++;
                }
                else if(s==k)
                {
                    ans+=5;
                    s=1;
                }
            }
            break;
        }
    }
    printf("%d ",ans);
    ///worst case
    ma--;
    ans=1;
    cout<<"ma="<<ma<<endl;
    for(int i=n-1; i>=0; i--)
    {
        if(a[i].size()==pass.size())
        {
            cout<<"i="<<i<<endl;
            int f=i+2-ma,s=0;
            cout<<"f="<<f<<endl;
            for(int g=1; g<=f;)
            {
                if(s<k)
                {
                    ans++;
                    s++;
                    g++;
                    if(s==k)
                    {
                        ans+=5;
                        s=0;
                        g++;
                    }
                    printf("s=%d ",s);
                }
                cout<<ans<<endl;
            }
        }
        break;
    }
    printf("%d",ans);
    return 0;
}

