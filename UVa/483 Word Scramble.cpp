#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("out.txt","w",stdout);
    string a;
    while(getline(cin,a))
    {
        int c,f=0;
        for(int i=0;i<=a.size();i++)
        {
            if(a[i]!=' '&&a[i]!='\0')f++;
            else if(a[i]==' '||a[i]=='\0')
            {
                c=i-1;
                for(int j=c,k=f;k>0;j--,k--)cout<<a[j];
                if(a[i]!='\0')cout<<" ";
                f=0;
            }
        }
        printf("\n");
    }
    return 0;
}
