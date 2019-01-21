#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,k,counter;
    scanf("%d",&n);
    int a[n];
    for(i=0; i<n; i++)
        scanf("%d",&a[i]);
    for(int m=0; m<i; m++)
        for(int n1=0; n1<i; n1++)
        {
            if(a[m]>a[n1])
            {
                int temp=a[m];
                a[m]=a[n1];
                a[n1]=temp;
            }
        }
    for(i=0; i<n; i++)
    {
        counter=0;
        long int b1=0,b2=0;
        for(j=0; j<=i; j++)
        {
            counter++;
            b1+=a[j];
        }
        for(k=i+1; k<n; k++)
            b2+=a[k];
        if(b1>b2)
            break;
    }
    printf("%d",counter);
    return 0;
}
