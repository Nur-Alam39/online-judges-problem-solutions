#include<bits/stdc++.h>
using namespace std;
int c_a,c_b,c_c,i;
int main()
{
    char a[5050];
    scanf("%s",&a);
    if(a[0]=='a')
    {
        while(a[i]=='a')
            c_a++,i++;
        if(c_a)while(a[i]=='b')
            c_b++,i++;
        else
            return printf("NO"),0;
        if(c_b)while(a[i]=='c')
            c_c++,i++;
        else
            return printf("NO"),0;
        if(c_a>=1&&c_b>=1)
        {
            if(a[i]=='a'||a[i]=='b')return printf("NO"),0;
            if(c_c==c_a||c_c==c_b)return printf("YES"),0;
            else return printf("NO"),0;
        }
        else
            return printf("NO"),0;
    }
    else
        return printf("NO"),0;
}

