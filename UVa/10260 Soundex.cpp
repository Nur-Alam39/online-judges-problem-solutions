#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[100];
    while(scanf("%s",&a)==1)
    {
        char b[100];
        int l=strlen(a),get=1,j=0;
        for(int i=0; i<l; i++)
        {
            if(a[i]!=a[i-1])
                get=1;
            else
                get=0;
            if(a[i]=='B'||a[i]=='F'||a[i]=='P'||a[i]=='V')
            {
                //cout<<b[j-1]<<" ";
                if(get==1&&b[j-1]!='1')
                    b[j++]='1';
            }
            else if(a[i]=='C'||a[i]=='G'||a[i]=='J'||a[i]=='K'||a[i]=='Q'||a[i]=='S'||a[i]=='X'||a[i]=='Z')
            {
                if(get==1&&b[j-1]!='2')
                    b[j++]='2';
            }
            else if(a[i]=='D'||a[i]=='T')
            {
                if(get==1&&b[j-1]!='3')
                    b[j++]='3';
            }
            else if(a[i]=='L')
            {
                if(get==1&&b[j-1]!='4')
                    b[j++]='4';
            }
            else if(a[i]=='M'||a[i]=='N')
            {
                if(get==1&&b[j-1]!='5')
                    b[j++]='5';
            }
            else if(a[i]=='R')
            {
                if(get==1&&b[j-1]!='6')
                    b[j++]='6';
            }
        }
        b[j]='\0';
        printf("%s\n",b);
    }
    return 0;
}
