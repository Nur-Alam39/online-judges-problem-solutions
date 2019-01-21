#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("out.txt","w",stdout);
    int s;
    string n;
    while(cin>>s&&s)
    {
        int i,j,k,m;
        cin>>n;
        for(j=1; j<=5; j++)
        {
            if(j==1)
            {
                for(i=0; i<n.size(); i++)
                {
                    if(n[i]=='1'||n[i]=='4')
                    {
                        for(m=1; m<=s+2; m++)
                            cout<<" ";
                    }
                    else if(n[i]=='2'||n[i]=='3'||n[i]=='5'||n[i]=='6'||n[i]=='7'||n[i]=='8'||n[i]=='9'||n[i]=='0')
                    {
                        cout<<" ";
                        for(k=1; k<=s; k++)
                            cout<<"-";
                        cout<<" ";
                    }
                    cout<<" ";
                }
            }
            else if(j==2)
            {
                for(k=1; k<=s; k++)
                {
                    for(i=0; i<n.size(); i++)
                    {
                        if(n[i]=='1'||n[i]=='2'||n[i]=='3'||n[i]=='7')
                        {
                            for(m=1; m<=s+1; m++)
                                cout<<" ";
                            cout<<"|";
                        }
                        else if(n[i]=='4'||n[i]=='8'||n[i]=='9'||n[i]=='0')
                        {
                            cout<<"|";
                            for(m=1; m<=s; m++)
                                cout<<" ";
                            cout<<"|";
                        }
                        else if(n[i]=='5'||n[i]=='6')
                        {
                            cout<<"|";
                            for(m=1; m<=s+1; m++)
                                cout<<" ";
                        }
                        cout<<" ";
                    }
                    if(k<s)
                        cout<<endl;
                }
            }
            else if(j==3)
            {
                for(i=0; i<n.size(); i++)
                {
                    if(n[i]=='1'||n[i]=='0'||n[i]=='7')
                    {
                        for(m=1; m<=s+2; m++)
                            cout<<" ";
                    }
                    else if(n[i]=='2'||n[i]=='3'||n[i]=='4'||n[i]=='5'||n[i]=='6'||n[i]=='8'||n[i]=='9')
                    {
                        cout<<" ";
                        for(m=1; m<=s; m++)
                            cout<<"-";
                        cout<<" ";
                    }
                    cout<<" ";
                }
            }
            else if(j==4)
            {
                for(k=1; k<=s; k++)
                {
                    for(i=0; i<n.size(); i++)
                    {
                        if(n[i]=='1'||n[i]=='3'||n[i]=='4'||n[i]=='5'||n[i]=='7'||n[i]=='9')
                        {
                            for(m=1; m<=s+1; m++)
                                cout<<" ";
                            cout<<"|";
                        }
                        else if(n[i]=='6'||n[i]=='8'||n[i]=='0')
                        {
                            cout<<"|";
                            for(m=1; m<=s; m++)
                                cout<<" ";
                            cout<<"|";
                        }
                        else if(n[i]=='2')
                        {
                            cout<<"|";
                            for(m=1; m<=s+1; m++)
                                cout<<" ";
                        }
                        cout<<" ";
                    }
                    if(k<s)
                        cout<<endl;
                }
            }
            else if(j==5)
            {
                for(i=0; i<n.size(); i++)
                {
                    if(n[i]=='1'||n[i]=='4'||n[i]=='7')
                    {
                        for(m=1; m<=s+2; m++)
                            cout<<" ";
                    }
                    else if(n[i]=='2'||n[i]=='3'||n[i]=='5'||n[i]=='6'||n[i]=='8'||n[i]=='9'||n[i]=='0')
                    {
                        cout<<" ";
                        for(k=1; k<=s; k++)
                            cout<<"-";
                        cout<<" ";
                    }
                    cout<<" ";
                }
            }
            cout<<endl;
        }
    }
    return 0;
}
