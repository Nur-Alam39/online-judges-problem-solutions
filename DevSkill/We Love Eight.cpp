#include<bits/stdc++.h>
#define r 100007
using namespace std;
int main()
{

    int tc;
    char l[4],a[r],ch;
    scanf("%d%c",&tc,&ch);
    while(tc--)
    {
        scanf("%s",&a);
        set<int>d;
        set<int>::iterator it;
        int s,n,f=0;
        s=strlen(a);
        for(int i=0; i<s; i++)
            if(a[i]!='A')
                d.insert(a[i]-48);
        l[0]=a[s-3];
        l[1]=a[s-2];
        l[2]=a[s-1];
        l[3]='\0';
        n=atoi(l);
        if(n%8==0)
        {
            if(d.size()==10)
                printf("NO\n");
            else
            {
                printf("YES\n");
                for(it=d.begin(); it!=d.end(); ++it)
                {

                    int p=*it;
                    printf("p=%d f=%d\n",p,f);
                    if(p==f)
                        f++;
                    else
                    {
                        printf("%d\n",f);
                        break;
                    }
                }
            }
        }
        else
            printf("NO\n");
    }
    return 0;
}
