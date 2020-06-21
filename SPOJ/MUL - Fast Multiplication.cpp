#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    char c;
    scanf("%d%c",&tc,&c);
    while(tc--)
    {
        char a[10010],b[10010];
        int p[30000]={0};
        scanf("%s%s",&a,&b);
        int m,n,mn,mu,carry,gf,i,j,k,z;
        m=strlen(a);
        n=strlen(b);
        for(i=0; i<max(m,n); i++)
            cout<<p[i]<<" ";
        if(m>n)
        {
            for(i=n-1; i>=0; i--)
            {
                vector<int>ct;
                for(z=n-i-1; z>0; z--)
                    ct.push_back(0);
                carry=0;
                mn=b[i]-'0';
                for(j=m-1; j>=0; j--)
                {
                    cout<<a[j]<<" "<<b[i]<<" ";
                    mu=a[j]-'0';
                    gf=mu*mn;
                    //cout<<"gun="<<gf<<" p.carry="<<carry;
                    gf+=carry;
                    if(gf>9)
                        carry=gf/10;
                    else
                        carry=0;
                    //cout<<"  n.carry="<<carry<<endl;
                    ct.push_back(gf%10);
                }
                if(carry>0)
                    ct.push_back(carry);
                cout<<"new:";
                for(j=ct.size()-1; j>=0; j--)
                    cout<<ct[j];
                cout<<endl;
                carry=0;
                for(z=0; z<ct.size(); z++)
                {
                    cout<<p[z]<<" "<<ct[z]<<endl;
                    int ad=p[z]+ct[z]+carry;
                    cout<<ad<<endl;
                    p[z]=ad%10;
                    if(ad>9)
                        carry=ad%10;
                    else
                        carry=0;
                }
                if(carry>0)
                    p[z++]=carry;
                cout<<"add:";
                for(m=z; m>=0; m--)
                    cout<<p[m];
                cout<<endl;
            }
        }
        else
        {

        }
    }
    return 0;
}
