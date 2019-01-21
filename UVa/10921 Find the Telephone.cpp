#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[100],b[30]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    while(gets(a))
    {
        for(int i=0; a[i]; i++)
        {
            if(a[i]>=48&&a[i]<=57)
                    printf("%c",a[i]);
            else if(a[i]=='-')
                printf("%c",a[i]);
            else
            {
                for(int j=0; b[j]; j++)
                {
                    if(a[i]==b[j])
                    {
                        if(j<=2)
                            printf("2");
                        else if(j>=3&&j<=5)
                            printf("3");
                        else if(j>=6&&j<=8)
                            printf("4");
                        else if(j>=9&&j<=11)
                            printf("5");
                        else if(j>=12&&j<=14)
                            printf("6");
                        else if(j>=15&&j<=18)
                            printf("7");
                        else if(j>=19&&j<=21)
                            printf("8");
                        else if(j>=22&&j<=25)
                            printf("9");
                        break;
                    }
                }
            }

        }
        printf("\n");
    }
    return 0;
}
