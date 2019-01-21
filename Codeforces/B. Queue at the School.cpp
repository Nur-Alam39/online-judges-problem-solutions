#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    char c;
    scanf("%d%d%c",&n,&t,&c);
    char a[n+1];
    scanf("%s",&a);
    for(int i=0;i<t;i++)
    {
        for(int j=0;a[j];)
        {
            if(a[j]=='B'&&a[j+1]=='G')
                swap(a[j],a[j+1]),j+=2;
            else
                j++;
        }
    }
    printf("%s",a);
    return 0;
}

