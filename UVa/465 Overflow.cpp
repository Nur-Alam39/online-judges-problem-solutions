#include<bits/stdc++.h>
using namespace std;
int main()
{
    while(1)
    {
        char a[1000],b[1000],c[1000],op[10];
        gets(a);
        int n,m,r,f=1,j=0,k=0;
        for(int i=0; i<strlen(a); i++)
        {
            if(a[i]=='*'||a[i]=='+')
                op[0]=a[i],f=0;
            if(a[i]>='0'&&a[i]<='9')
            {
                if(f==1)b[j++]=a[i];
                else c[k++]=a[i];
            }
        }
        b[j]=c[k]='\0';
        cout<<b<<op<<c<<endl;
        if(strlen(b)>=10)
    }
    return 0;
}
