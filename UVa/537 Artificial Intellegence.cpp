#include<cstdio>
#include<string>
#include<cstdlib>
#include<iostream>
using namespace std;
int main()
{
    int n,tc=1;
    scanf("%d",&n);
    while(n--)
    {
        string pro;
        char u[155],p[155],i[155],rer[12]=".0123456789";
        double U=0,P=0,I=0;
        int j,k,g,c1=0,c2=0,c3=0;
        getline(pro);
        printf("Problem #%d\n",tc++);
        for(j=0; pro[j]; j++)
        {
            if(pro[j]=='U'&&pro[j+1]=='=')
            {
                for(k=j+2; pro[k]!='m'||pro[k]!='k'||pro[k]!='M'||pro[k]!='V'||pro[k]=='.'; k++)
                {
                    for(g=0; rer[g]; g++)
                        if(pro[k]==rer[g])
                        {
                            u[c1++]=rer[g];
                        }
                }
                U=atof(u);
                if(pro[k]=='m')
                    U=U/1000;
                else if(pro[k]=='k')
                    U=U*1000;
                else if(pro[k]=='M')
                    U=U*1000000;
                printf("U=%llf\n",U);
            }
            else if(pro[j]=='P'&&pro[j+1]=='=')
            {
                for(k=j+2; pro[k]!='m'||pro[k]!='k'||pro[k]!='M'||pro[k]!='W'||pro[k]=='.'; k++)
                {
                    for(g=0; rer[g]; g++)
                        if(pro[k]==rer[g])
                        {
                            p[c2++]=rer[g];
                        }
                }
                P=atof(p);
                if(pro[k]=='m')
                    P=P/1000;
                else if(pro[k]=='k')
                    P=P*1000;
                else if(pro[k]=='M')
                    P=P*1000000;
                printf("P=%llf\n",P);
            }
            else if(pro[j]=='I'&&pro[j+1]=='=')
            {
                for(k=j+2; pro[k]!='m'||pro[k]!='k'||pro[k]!='M'||pro[k]!='A'||pro[k]=='.'; k++)
                {
                    for(g=0; rer[g]; g++)
                        if(pro[k]==rer[g])
                        {
                            i[c3++]=rer[g];
                        }
                }
                I=atof(i);
                if(pro[k]=='m')
                    I=I/1000;
                else if(pro[k]=='k')
                    I=I*1000;
                else if(pro[k]=='M')
                    I=I*1000000;
                printf("I=%llf\n",I);
            }
        }
        if(P==0.0)
            printf("P=%.2llfW\n",U*I);
        else if(U==0.0)
            printf("U=%.2llfV\n",P/I);
        else if(I==0.0)
            printf("I=%.2llfA\n",P/U);
    }
    return 0;
}
