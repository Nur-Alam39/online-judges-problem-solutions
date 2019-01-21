#include<bits/stdc++.h>
using namespace std;
unsigned long long int fact(int n)
{
    unsigned long long int f=1;
    for(int i=1; i<=n; i++)
        f*=i;
    return f;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,v=1;
    cin>>n;
    while(n--)
    {
        unsigned long long int al,cl,ans;
        string s;
        cin>>s;
        int l;
        l=s.size();
        int b[l],k=0,j,i,f;
        sort(s.begin(),s.end());
        for(i=0; i<l; i++)
        {
            f=1;
            for(j=i+1; j<l; j++)
            {
                if(s[i]==s[j])
                    f++;
                else
                    break;
            }
            if(f>1)
            {
                b[k++]=f;
                i=j-1;
            }
        }
        al=fact(l);
        cl=1;
        for(int i=0; i<k; i++)
                cl=cl*fact(b[i]);
        ans=al/cl;
        cout<<"Data set "<<v++<<": "<<ans<<endl;
    }
    return 0;
}
