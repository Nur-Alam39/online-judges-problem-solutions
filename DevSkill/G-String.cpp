#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    scanf("%d",&tc);
    while(tc--)
    {
        char a[200];
        scanf("%s",&a);
       // printf("%s\n",a);
        int u=0,v=0,c=0,ot=0;
        int l=strlen(a);
        for(int i=0;i<l;i++)
        {
            if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')v++;
            else if(a[i]>='A'&&a[i]<='Z')u++;
            else if(!(a[i]>='A'&&a[i]<='Z')&&!(a[i]>='a'&&a[i]<='z'))ot++;
            else if((a[i]!='a'&&a[i]!='e'&&a[i]!='i'&&a[i]!='o'&&a[i]!='u')&&(a[i]>='a'&&a[i]<='z'))c++;
        }
        //printf("v=%d u=%d c=%d ot=%d\n",v,u,c,ot);
        if(l==u)printf("%d\n",l);
        else if(l==v)printf("0\n",v);
        else if((v+ot)==l)printf("%d\n",ot);
        else if(v>=c&&(v+c+ot+u==l))printf("%d\n",c+ot+u);
        else if(v<c&&(v+c+ot+u==l))printf("%d\n",v+ot+u);
    }
    return 0;
}
