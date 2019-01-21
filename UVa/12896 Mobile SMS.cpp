#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    scanf("%d",&tc);
    while(tc--)
    {
        int n;
        scanf("%d",&n);
        int text[n],num[n],j=0,a,pos;
        for(int i=0; i<n*2; i++)
        {
            scanf("%d",&a);
            if(i<n)
                text[i]=a;
            else
                num[j++]=a;
        }
        for(int i=0; i<n; i++)
        {
            if(text[i]==0)
            {
                for(int m=0; m<num[i]; m++)
                    printf(" ");
            }
            else if(text[i]==1)
            {
                if(num[i]==1)
                    printf(".");
                else if(num[i]==2)
                    printf(",");
                else if(num[i]==3)
                    printf("?");
                else if(num[i]==4)
                    printf("%c",34);
            }
            else if(text[i]==2)
            {
                if(num[i]==1)
                    printf("a");
                else if(num[i]==2)
                    printf("b");
                else if(num[i]==3)
                    printf("c");
            }
            else if(text[i]==3)
            {
                if(num[i]==1)
                    printf("d");
                else if(num[i]==2)
                    printf("e");
                else if(num[i]==3)
                    printf("f");
            }
            else if(text[i]==4)
            {
                if(num[i]==1)
                    printf("g");
                else if(num[i]==2)
                    printf("h");
                else if(num[i]==3)
                    printf("i");
            }
            else if(text[i]==5)
            {
                if(num[i]==1)
                    printf("j");
                else if(num[i]==2)
                    printf("k");
                else if(num[i]==3)
                    printf("l");
            }
            else if(text[i]==6)
            {
                if(num[i]==1)
                    printf("m");
                else if(num[i]==2)
                    printf("n");
                else if(num[i]==3)
                    printf("o");
            }
            else if(text[i]==7)
            {
                if(num[i]==1)
                    printf("p");
                else if(num[i]==2)
                    printf("q");
                else if(num[i]==3)
                    printf("r");
                else if(num[i]==4)
                    printf("s");
            }
            else if(text[i]==8)
            {
                if(num[i]==1)
                    printf("t");
                else if(num[i]==2)
                    printf("u");
                else if(num[i]==3)
                    printf("v");
            }
            else if(text[i]==9)
            {
                if(num[i]==1)
                    printf("w");
                else if(num[i]==2)
                    printf("x");
                else if(num[i]==3)
                    printf("y");
                else if(num[i]==4)
                    printf("z");
            }
        }
        printf("\n");
    }
    return 0;
}
