#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,cs=1;
    scanf("%d",&tc);
    while(tc--)
    {
        string a;
        cin>>a;
        sort(a.begin(),a.end());
        int f=1;
        while(1)
        {
            int i,x=0;
            for(i=0; i<a.size(); i++)
            {
                if(a[i]!='a')
                {
                    a[i]=a[i]-1;
                    if(f==1)f=0;
                    else f=1;
                    x=1;
                    break;
                }
            }
            if(!x)break;
            //cout<<a<<endl;
        }
        if(f==0)printf("Alice\n");
        else printf("Bob\n");
        cout<<a<<endl;
    }
    return 0;
}


