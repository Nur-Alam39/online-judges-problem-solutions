#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    scanf("%d",&tc);
    while(tc--)
    {
        int value,i,sen,x,j;
        double v,sum=0;
        char c;
        scanf("%d",&value);
        char ch[value],val[value][20];
        for(i=0; i<value; i++)
            scanf("%s%s",&ch[i],&val[i]);
        puts(ch);
        for(i=0; i<value; i++)
            puts(val[i]);
        scanf("%d%c",&sen,&c);
        char text[sen][11000];
        for(i=0; i<sen; i++)
            gets(text[i]);
        for(i=0; i<sen; i++)
            puts(text[i]);
        for(i=0; i<sen; i++)
            for(x=0; text[i][x]; x++)
            {
                for(j=0; ch[j]; j++)
                    if(text[i][x]==ch[j])
                    {
                        value=0;
                        int n1=0,l,b,z=0;
                        l=strlen(val[j]);
                        for(b=l-1; b>=0; b--)
                        {
                            //printf("Value=%c\n",val[j][b]);
                            value=value*pow(10,z);
                            printf("multi=%d\n",value);
                            int n=val[j][b]-'0';
                            n1+=n*value;
                            z++;
                        }
                        printf("Value=%d\n",n1);
                        sum+=n1;
                        break;
                    }
            }
        printf("%.2lf$",double(sum)/100.00);
    }
    return 0;
}
