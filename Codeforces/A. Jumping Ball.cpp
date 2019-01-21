#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,s,c=0,p,i,j,e;
    char ch;
    scanf("%d%c",&n,&ch);
    char a[n+4];
    scanf("%s",&a);
    printf("a=%s\n",a);
    cout<<a[1]<<a[4];
    for(i=0; a[i]; i++)
    {
        p=i+1;
        //e=n-i+1;
        //printf("e=%d ",e);
        for(j=i; a[j]; j++)
        {
            cout<<a[j];
            if(a[j]=='<')
                p--;
            else if(a[j]=='>')
                p++;
            if(p<1||p>n)
            {
                c++;
                break;
            }
            printf("p=%d c=%d\n",p,c);
        }
        cout<<endl;
    }
    printf("%d",c);
    return 0;
}

