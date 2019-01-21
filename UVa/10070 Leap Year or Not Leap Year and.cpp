#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    int nl=0;
    while(cin>>a)
    {
        if(nl!=0)
            printf("\n");
        nl=1;
        int f=0,l=0,a4=0,a100=0,a400=0,a15=0,a55=0;
        for(int i=0; i<a.size(); i++)
        {
            a4=((a4*10)+(a[i]-'0'))%4;
            a100=((a100*10)+(a[i]-'0'))%100;
            a400=((a400*10)+(a[i]-'0'))%400;
            a15=((a15*10)+(a[i]-'0'))%15;
            a55=((a55*10)+(a[i]-'0'))%55;
        }
        if((a4==0&&a100!=0)||a400==0)
        {
            printf("This is leap year.\n");
            l=1,f=1;
        }
        if(a15==0)
            f=1,printf("This is huluculu festival year.\n");
        if(a55==0&&l==1)
            f=1,printf("This is bulukulu festival year.\n");
        if(f==0)
            printf("This is an ordinary year.\n");
    }
    return 0;
}
