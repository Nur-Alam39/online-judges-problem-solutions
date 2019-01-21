#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("out.txt","w",stdout);
    int n,p[27]= {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,57,59,61,67,71,73,79,83,89,97};
    while(scanf("%d",&n)&&n)
    {
        printf("%3d! =",n);
        int c[27],t,i,c_d;
        memset(c,0,sizeof(c));
        while(n!=1)
        {
            i=0,t=n;
            while(t>1)
            {
                c_d=0;
                while(t%p[i]==0)
                {
                    c_d++,t/=p[i];
                }
                c[i]+=c_d,i++;
            }
            n--;
        }
        int f=0;
        for(int i=0; i<26; i++)
            if(c[i])f++;
        for(int i=0; i<15; i++)
            if(c[i])printf("%3d",c[i]);
        if(f>15)
        {
            printf("\n      ");
            for(int i=15; i<26; i++)
                if(c[i])printf("%3d",c[i]);
        }
        printf("\n");
    }
    return 0;
}
