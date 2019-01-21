#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    char c;
    scanf("%c",&c);
    while(n--)
    {
        int co=0,s=0;
        char a[10010];
        scanf("%s",&a);
        for(int i=0;a[i];)
        {
            printf("i=%d %c ",i,a[i]);
            if(a[i]=='1')
            {
                s++;
                while(a[i]=='1'){
                        i++;
                        co++;
                        printf("in=%c ",a[i+1]);
                    }
            }
            else i++;
        }
        printf("%d\n",co+s);
    }
    return 0;
}
