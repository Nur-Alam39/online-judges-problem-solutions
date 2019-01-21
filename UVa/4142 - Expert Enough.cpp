#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,n1;
        cin>>n;
        string a[n];
        n1=n*2;
        int tk[n1];
        for(int i=0,j=0; i<n||j<n1; i++,j+=2)
        {
            cin>>a[i];
            cin>>tk[j]>>tk[j+1];
        }
        int z;
        cin>>z;
        int b[z],b1=0,cl=0,p;
        for(int j=0; j<z; j++)
            cin>>b[j];
        for(int k=0; k<z; k++)
        {
            int d[z];
            for(int j=0; j<n1; j++)
            {
                d[j]=-1;
            }
            for(int m=0; m<n1; m+=2)
            {
                if(b[k]>=tk[m]&&b[k]<=tk[m+1])
                {
                    cl=1;
                    d[b1]=m/2;
                    b1++;
                }
            }
            int co=0;
            for(int i=0; i<b1; i++)
                if(d[i]>=0)
                    {
                        d[0]=d[i];
                        co++;
                    }
            if(co>1||co==0)
                printf("UNDETERMINED\n");
            else if(co==1)
            {
                p=d[0];
                cout<<a[p]<<endl;
            }
        }
        cout<<endl;
    }
    return 0;
}
