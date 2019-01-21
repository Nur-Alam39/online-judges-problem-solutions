#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[2000],b[40]="acefghijklmnrstuyzBCDEFGJKLNPQRSZ";
    scanf("%s",a);
    int l,i,j,f=1;
    l=strlen(a);
    if(l%2==0)
    {
        for(int m=0; a[m]; m++)
        {
            for(int k=0; b[k]; k++)
            {
                if(a[m]==b[k])
                {
                    printf("NIE");
                    f=0;
                    break;
                }
            }
            if(f==0)
                break;
        }
        if(f==1)
        {
            for(i=0,j=l-1; i<=l/2-1; i++,j--)
            {

                if((a[i]=='b'&&a[j]!='d')||(a[i]=='d'&&a[j]!='b')||(a[i]=='p'&&a[j]!='q')||(a[i]=='q'&&a[j]!='p')||(a[i]=='o'&&a[j]!='o')||(a[i]=='v'&&a[j]!='v')||(a[i]=='w'&&a[j]!='w')||(a[i]=='x'&&a[j]!='x')||(a[i]=='X'&&a[j]!='X')||(a[i]=='M'&&a[j]!='M')||(a[i]=='O'&&a[j]!='O')||(a[i]=='A'&&a[j]!='A')||(a[i]=='H'&&a[j]!='H')||(a[i]=='I'&&a[j]!='I')||(a[i]=='T'&&a[j]!='T')||(a[i]=='U'&&a[j]!='U')||(a[i]=='V'&&a[j]!='V')||(a[i]=='W'&&a[j]!='W')||(a[i]=='Y'&&a[j]!='Y'))
                {
                    printf("NIE");
                    f=0;
                    break;
                }
            }
        }
        if(f==1)
            printf("TAK");
    }
    else
    {
        i=l/2;
        if(a[i]!='o'&&a[i]!='x'&&a[i]!='v'&&a[i]!='w'&&a[i]!='A'&&a[i]!='H'&&a[i]!='I'&&a[i]!='M'&&a[i]!='O'&&a[i]!='T'&&a[i]!='U'&&a[i]!='V'&&a[i]!='W'&&a[i]!='X'&&a[i]!='Y')
        {
            printf("NIE");
            f=0;
        }
        else
        {
            for(int k=0; b[k]; k++)
            {
                if(a[i]==b[k])
                {
                    printf("NIE");
                    f=0;
                    break;
                }
            }
            if(f==1)
            {
                for(i=0,j=l-1; i<=l/2-1; i++,j--)
                {
                    for(int k=0; b[k]; k++)
                    {
                        if(a[i]==b[k])
                        {
                            printf("NIE");
                            f=0;
                            break;
                        }
                    }
                    if(f==0)
                        break;
                    if((a[i]=='b'&&a[j]!='d')||(a[i]=='d'&&a[j]!='b')||(a[i]=='p'&&a[j]!='q')||(a[i]=='q'&&a[j]!='p')||(a[i]=='o'&&a[j]!='o')||(a[i]=='v'&&a[j]!='v')||(a[i]=='w'&&a[j]!='w')||(a[i]=='x'&&a[j]!='x')||(a[i]=='X'&&a[j]!='X')||(a[i]=='M'&&a[j]!='M')||(a[i]=='O'&&a[j]!='O')||(a[i]=='A'&&a[j]!='A')||(a[i]=='H'&&a[j]!='H')||(a[i]=='I'&&a[j]!='I')||(a[i]=='T'&&a[j]!='T')||(a[i]=='U'&&a[j]!='U')||(a[i]=='V'&&a[j]!='V')||(a[i]=='W'&&a[j]!='W')||(a[i]=='Y'&&a[j]!='Y'))
                    {
                        printf("NIE");
                        f=0;
                        break;
                    }
                }
            }

        }
        if(f==1)
            printf("TAK");
    }
    return 0;
}
