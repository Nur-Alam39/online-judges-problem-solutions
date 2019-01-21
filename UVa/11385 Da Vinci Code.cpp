#include<bits/stdc++.h>
using namespace std;
int fib[100];
void f()
{
    fib[1]=1,fib[2]=2;
    for(int i=3; i<=45; i++)fib[i]=fib[i-1]+fib[i-2];
}
int main()
{
    f();
    int tc;
    scanf("%d",&tc);
    while(tc--)
    {
        int n;
        scanf("%d",&n);
        int a[n];
        for(int i=0; i<n; i++)scanf("%d",&a[i]);
        string ch;
        cin.ignore();
        getline(cin,ch);
        char out[200];
        memset(out,32,sizeof(out));
        int l=0,mx=-100;
        for(int i=0; i<n; i++)
        {
            int p;
            for(int h=1;h<=45;h++)
            {
                if(fib[h]==a[i])
                {
                    p=h;
                    if(p>mx)mx=p;
                    break;
                }
            }
            while(l<ch.size())
            {
                if(ch[l]>=65&&ch[l]<=90)
                {
                     out[p]=ch[l++];
                     break;
                }
                l++;
            }
        }
        out[mx+1]='\0';
        for(int i=1;i<=mx;i++)
        printf("%c",out[i]);
        printf("\n");
    }
    return 0;
}
