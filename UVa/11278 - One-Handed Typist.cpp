#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("out.txt","w",stdout);
    char a[10000],am[1000]={"`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./ ~!@#$%^&*()_+QWERTYUIOP{}|ASDFGHJKL:\"ZXCVBNM<>?"};
    char bm[1000]={"`123qjlmfp/[]456.orsuyb;=\\789aehtdck-0zx,inwvg' ~!@#QJLMFP?{}$%^>ORSUYB:+|&*(AEHTDCK_)ZX<INWVG\""};
    while(gets(a))
    {
        for(int i=0;a[i];i++)
        {
            if(a[i]==34)printf("_");
            else if(a[i]==' ')printf(" ");
            else if(a[i]=='?')printf("%c",34);
            else
            {
                for(int k=0;am[k];k++)
                {
                    if(am[k]==a[i]){
                            printf("%c",bm[k]);break;}
                }
            }
        }
        printf("\n");
    }
    return 0;
}

