#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int n;
    while(scanf("%ld",&n))
    {
        int a[2000],x,i,j,m,carry;
        a[0]=1;
        m=1;
        carry=0;
        for(i=1;i<=n;i++)
        {
            for(j=0;j<m;j++)
            {x=a[j]*i+carry;
            a[j]=x%10;
            carry=x/10;}
            while(carry)
            {
                a[m]=carry%10;
                carry/=10;
                m++;
            }
        }
        for(i=0,j=m-1;i<j;i++,j--)
            swap(a[i],a[j]);
        for(i=0;i<m;i++)
            printf("%d",a[i]);
        cout<<endl;
        if(m-1>10)
            printf("Overflow!\n");
        else if(m-1<5)
            printf("Underflow!\n");
        else if(m-1>=4&&m-1<=10)
        {
            unsigned long int ans=0;
            j=0;
            for(i=m-1;i>=0;i--)
                {
                    cout<<a[i]<<" ";
                    ans=ans+a[i]*pow(10,j);
                    cout<<a[i]*pow(10,j)<<" "<<ans<<endl;
                    j++;
                }
            if(ans>6227020800)
                printf("Overflow!\n");
            else if(ans<10000)
                printf("Underflow!\n");
            else
                cout<<ans<<endl;
        }
    }
    return 0;
}
