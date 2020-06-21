#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[30];
    int A,B,S,c,win,tie;
    while(scanf("%s",&a)==1)
    {
        A=B=S=c=tie=0,win=1;
        for(int i=0; i<20; i+=2)
        {
            A+=a[i]-48,c++;
            if(c==7)
            {
                if(A==4&&B<=1)
                {
                    win=1;
                    break;
                }
                else if(A<=1&&B==3)
                {
                    win=0;
                    break;
                }
            }
            else if(c==9)
            {
                if(A>B)
                {

                    //if((A==5&&B=<3)||(A==4&&B<=2)||(A==3&&B<=1)(A==2&&B==0))
                    if(A-B>=2)
                    {
                        win=1;
                        break;
                    }
                }
                else if(B>A)
                {
                    //if((A==0&&B=<1)||(A==4&&B<=2)||(A==3&&B<=1)(A==2&&B==0))
                    if(B-A>=1)
                    {
                        win=0;
                        break;
                    }
                }
            }
            B+=a[i+1]-48,c++;
            if(c==6)
            {
                if(A==3&&B==0)
                {
                    win=1;
                    break;
                }
                else if(A==0&&B==3)
                {
                    win=0;
                    break;
                }
            }
            else if(c==8)
            {
                if(A-B>=2)
                {
                    win=1;
                    break;
                }
                else if(B-A>=2)
                {
                    win=0;
                    break;
                }
            }
            else if(c==10)
            {
                if(A-B>=1)
                {
                    win=1;
                    break;
                }
                else if(B-A>=1)
                {
                    win=0;
                    break;
                }
            }
            else if(c>10&&c%2==0)
            {

                if(c<20)
                {
                    if(A==B)continue;
                    else if(A>B)win=1;
                    else win=0;
                    break;
                }
                else if(c==20)
                {
                    if(A==B)tie=1;
                    else if(A>B)win=1;
                    else win=0;
                    break;
                }
            }
        }
        if(tie==1)printf("TIE\n");
        else if(win)printf("TEAM-A %d\n",c);
        else printf("TEAM-B %d\n",c);
    }
    return 0;
}
