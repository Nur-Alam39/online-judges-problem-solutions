#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    char c[1005],d[1005];
    int ap[26],m=0,x=0,i,u=1;
    for(int i=0; i<26; i++)
        ap[i]=-1;
    getline(cin,a);
    getline(cin,b);
    if(a==b)
        printf("0");
    else
    {
        for(i=0; i<a.size(); i++)
        {
            if(a[i]!=b[i])
            {
                if(ap[a[i]-97]==-1&&ap[b[i]-97]==-1)
                {
                    x++;
                    c[m]=a[i];
                    d[m]=b[i];
                    m++;
                    ap[a[i]-97]=0;
                    ap[b[i]-97]=0;
                }
                else if((ap[a[i]-97]==-1&&ap[b[i]-97]==0)||(ap[a[i]-97]==0&&ap[b[i]-97]==-1))
                {
                    u=0;
                    break;
                }
            }
        }
        c[m]='\0';
        d[m]='\0';
        if(x!=0)
        {
            if(u==0)
                printf("-1");
            else
            {
                printf("%d\n",x);
                int l=strlen(c);
                for(int i=0; i<l; i++)
                    cout<<c[i]<<" "<<d[i]<<endl;
            }
        }
    }
    return 0;
}

