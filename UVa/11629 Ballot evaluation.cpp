#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("out.txt","w",stdout);
    int p,g;
    float v;
    scanf("%d%d",&p,&g);
    cin.ignore();
    map<string,float>a;
    string gs,pt;
    for(int i=0; i<p; i++)
    {
        cin>>pt>>v;
        a[pt]=v;
    }
    cin.ignore();
    for(int i=0; i<g; i++)
    {
        cout<<i+1<<". ";
        getline(cin,gs);
        char op[5],r[100],num[5];
        int p=0;
        float ans=0;
        int f;
        bool z=false;
        for(int j=0; j<gs.size(); j++)
        {
            if(gs[j]=='+'||gs[j]==' ')
            {
                r[p]='\0';
                ans+=a[r];
                p=0;
            }
            else if((gs[j]>=97&&gs[j]<=122)||(gs[j]>=48&&gs[j]<=57)||(gs[j]>=65&&gs[j]<=91))r[p++]=gs[j];
            else
            {
                if((gs[j]=='='||gs[j]=='>'||gs[j]=='<')&&gs[j+1]==' ')
                {
                    op[0]=gs[j];
                    op[1]='\0';
                    j+=2;
                }
                else if((gs[j]=='>'&&gs[j+1]=='=')||(gs[j]=='<'&&gs[j+1]=='='))
                {
                    op[0]=gs[j];
                    op[1]=gs[j+1];
                    op[2]='\0';
                    j+=3;
                }
                int l=0;
                while(gs[j]>=48&&gs[j]<=57)
                {
                    num[l++]=gs[j++];
                }
                num[l]='\0';
                f=atoi(num);
                if(strcmp(op,"=")==0)
                {
                    cout<<f<<" "<<ans<<" "<<f-ans<<" ";
                    if((f-ans)<=0)
                    {
                        printf(" here(=) ");
                        z=true;
                        cout<<z<<" ";
                    }
                }
                else if(strcmp(op,"<")==0)
                {
                    if(ans<f)z=true;
                }
                else if(strcmp(op,">")==0)
                {
                    cout<<f<<" "<<ans<<" "<<ans-f<<" ";
                    if(ans>f){
                      printf("here(>) ") ;     z=true;
                    }
                    else if(ans-f>=0)
                        z=false;
                }
                else if(strcmp(op,">=")==0)
                {
                    if(ans>=f)z=true;
                }
                else if(strcmp(op,"<=")==0)
                {
                    if(ans<=f)z=true;
                }
            }
        }
        cout<<"f="<<f<<" ans="<<ans<<" op : "<<op;
        if(z)
            cout<<" Guess #"<<i+1<<" was correct."<<endl;
        else
            cout<<" Guess #"<<i+1<<" was incorrect."<<endl;
    }
    return 0;
}
