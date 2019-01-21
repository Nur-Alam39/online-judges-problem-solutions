#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    while(getline(cin,a))
    {
        list<char>c;
        int j,x;
        for(int i=0; i<a.size(); i++)
        {
            if(a[i]!='['&&a[i]!=']')
                c.push_back(a[i]);
            if(a[i]=='[')
            {
                char b[100];
                //printf("i=%c\n",a[i]);
                for(x=0,j=i+1;; j++,x++,i++)
                    {
                        if(a[j]==']'||a[j]=='[')
                            break;
                        b[x]=a[j];
                    }
                b[x]='\0';
                //cout<<"b="<<b<<endl;
                int l=strlen(b);
                for(int k=l-1; b[k]; k--)
                    c.push_front(b[k]);
            }
        }
        //printf("out:\n");
        list<char>::iterator itr;
        for(itr=c.begin(); itr!=c.end(); itr++)
            cout<<*itr;
        printf("\n");
    }
    return 0;
}
