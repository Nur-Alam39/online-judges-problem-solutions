#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[70000];
    scanf("%s",&a);
    int apn[26],ac=0,q=0,l,i,j,i2,n;
    l=strlen(a);
    cout<<a<<endl;
    cout<<"l="<<l<<endl;
    if(l<26)
    {
        printf("-1");
        return 0;
    }
    char ap[27]= {"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    for(i=0; i<26; i++)
        apn[i]=0;
    for(i=0; a[i]; i++)
    {
        if((a[i]>='A'&&a[i]<='Z')||a[i]=='?')
        {
            if(a[i]>='A'&&a[i]<='Z')
            {
                n=a[i]-65;
                if(apn[n]==0)
                {
                    apn[n]++,ac++;
                    cout<<a[i]<<" "<<apn[n]<<" "<<ac<<endl;
                }
                else
                {
                    ac=0,q=0;
                    for(int x=0; x<26; x++)
                        apn[x]=0;
                }
                //cout<<n<<endl;
            }
            else if(a[i]=='?')
                ac++,q++;
        }
        if(ac==26)
        {
            int r=0;
            char b[27];
            for(i2=0; i2<26; i2++)
                cout<<" "<<apn[i2];
            cout<<endl;
            for(i2=0,j=0; i2<26; i2++)
            {
                if(apn[i2]==0)
                {
                    r++;
                    b[j]=ap[i2];
                    //cout<<z<<" "<<b[j]<<"\n";
                    j++;
                }
            }
            b[j]='\0';
            printf("b=%s\n",b);
            cout<<"\nq="<<q<<" r="<<r<<endl;
            if(q>r)
            {
                r=0;
                q=0;
            }
            else
            {
                for(i2=i-26-1,j=0; i2<i+26; i2++)
                {
                    cout<<i2<<" "<<a[i2];
                    if(a[i2]=='?')
                        a[i2]=b[j++];
                        cout<<" "<<a[i2]<<endl;
                }
                for(i2=0; i2<l; i2++)
                {
                    cout<<a[i2];
                    if(a[i2]=='?')
                        a[i2]='A';
                }
                printf("\nmodi:");
                for(i2=0; i2<l; i2++)
                    cout<<a[i2];
                return 0;
            }
        }
    }
    printf("-1");
    return 0;
}
