#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("out.txt","w",stdout);
    int a,i=5;
    while(i--)
    {
        scanf("%d",&a);
        if(a>=80&&a<=100)
            printf("A+\n");
        else if(a>=70&&a<80)
            printf("A\n");
    }
    return 0;
}
