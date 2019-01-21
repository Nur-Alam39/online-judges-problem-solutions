#include<bits/stdc++.h>
using namespace std;
int main()
{
    while(1)
    {
        char a[1000000];
        scanf("%s",&a);
        int l=strlen(a),i;
        vector<int>d;
        char b[l],c[l];
        if(a[0]=='.')
            break;
        for(i=1; i<=sqrt(l); i++)
            if(l%i==0)
            {
                if(l/i==i)
                    d.push_back(i);
                else
                    d.push_back(i),d.push_back(l/i);
            }
        sort(d.begin(),d.end());
        for(i=d.size()-1; i>=0; i--)
            printf("%d ",d[i]);
        int k,x=0,j,f,s,p;
        for(i=d.size()-1; i>=0; i--)
        {
            for(k=0,j=0; j<d[i]; j++,k++)
                b[k]=a[j];
            b[k]='\0';
            printf("%s\n",b);
            p=0;
            while(1)
            {
                for(j=0,k=0; j<d[i]; j++,k++,p++)
                    c[k]=a[p];
                c[k]='\0';
                printf("p=%d c=%s\n",p,c);
                if(strcmp(b,c)!=0)
                    break;
                else if(p==l)
                {
                    if(strcmp(b,c)==0)
                        {
                            printf("%d\n",l);
                            break;
                        }
                }
            }
            if(p==l)
            {
                printf("%d\n",l/strlen(b));
                break;
            }
        }
    }
    return 0;
}


