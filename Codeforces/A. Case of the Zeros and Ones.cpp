#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    getchar();
    char a[n+1];
    scanf("%s",&a);
    int l=strlen(a);
    for(int j=l-2,i=l-1; a[j];)
    {
        printf("i.a[%d]=%c j.a[%d]=%c\n",i,a[i],j,a[j]);
        if(a[i]=='0'&&a[j]=='1')
            l-=2,i-=2,j--;
        else if(a[i]=='0'&&a[j]!='1')
            j--;
        else if(a[i]=='1')
            i--,j--;
        else if(a[i]=='1'&&a[j]=='0')
            i--,j--;
        else if(a[i]=='1'&&a[j]=='1')
            i--,j--;
        else if(a[i]=='0'&&a[j]=='0')
            j--;
        printf("i=%d j=%d\n\n",i,j);
    }
    printf("%d",l);
    return 0;
}

