#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b="";
    cin>>a;
    int p=1,q=0,n=a.size();
    b+=a[0];
    for(int i=1; i<n; i++)
    {
        cout<<b[q]<<" "<<a[i]<<endl;
        if(b[q]!=a[i])b+=a[i],q++;
        else
        {
            printf("p=%d\n",p);
            int j=i;
            if(p)
            {
                while(a[j]==b[q])i++,j++;
                p=0;
                i--;
            }
            else{
                b+=a[i],q++,j++;
                while(a[j]==b[q])i++,j++;
                p=1;
                i--;
            }
        }
            cout<<b<<endl;
    }
    cout<<b;
    return 0;
}

