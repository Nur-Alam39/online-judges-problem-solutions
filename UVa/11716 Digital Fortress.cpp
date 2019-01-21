#include<iostream>
#include<cstring>
#include<cmath>
#include<cstdio>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    for(int m=1; m<=tc; m++)
    {
        char cd[12000];
        scanf("%s",cd);
        int l,in;
        float sq,d;
        l=strlen(cd);
        sq=sqrt(l);
        in=sqrt(l);
        d=sq-in;
        if(d!=0.0)
            cout<<"INVALID"<<endl;
        else
        {
            int i,j,k=0;
            char ct2[in][in];
            for(i=0; i<in; i++)
                for(j=0; j<in; j++)
                {
                    ct2[i][j]=cd[k];
                    k++;
                }
            ct2[i][j]='\0';
            for(int x=0; x<in; x++)
                for(int y=0; y<in; y++)
                    cout<<ct2[y][x];
            cout<<endl;
        }
    }
    return 0;
}
