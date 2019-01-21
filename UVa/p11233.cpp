#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l,n;
    while(scanf("%d%d",&l,&n))
    {
        string s[l],p[l],in;
        for(int i=0; i<l; i++)
            cin>>s[i]>>p[i];
        for(int i=0; i<n; i++)
        {
            int f=1;
            cin>>in;
            for(int j=0; j<l; j++)
            {
                if(in==s[j])
                {
                    cout<<p[j]<<endl;
                    f=0;
                }
            }
            if(f==1)
            {
                int L=in.size();
                if(in[L-1]=='y')
                {
                    if(in[L-2]=='a'||in[L-2]=='e'||in[L-2]=='i'||in[L-2]=='o'||in[L-2]=='u')
                        cout<<in<<"s\n";
                    else
                    {
                        for(int k=0; k<L-1; k++)
                            printf("%c",in[k]);
                        printf("ies\n");
                    }
                }
                else if(in[L-1]=='o'||in[L-1]=='s'||(in[L-2]=='c'&&in[L-1]=='h')||(in[L-2]=='s'&&in[L-1]=='h')||in[L-1]=='x')
                    cout<<in<<"es\n";
                else
                    cout<<in<<"s\n";
            }
        }
    }
    return 0;
}
