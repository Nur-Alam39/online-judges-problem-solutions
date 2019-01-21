#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int n,i;
    scanf("%ld",&n);
    int a,c[5]= {0},car=0,in;
    float f;
    for(i=0; i<n; i++)
        scanf("%d",&a),c[a]++;
    car=c[4];
    if(c[1]==c[3])
    {
        car+=c[1];
        c[1]=0;
    }
    else if(c[1]>c[3])
    {
        car+=c[3];
        c[1]-=c[3];
    }
    else
    {
        car+=c[1];
        c[3]-=c[1];
        car+=c[3];
        c[1]=0;
    }
    in=f=(c[1]+c[2]*2)/4.0;
    if(f-in>0)
        in++;
    car+=in;
    printf("%ld",car);
    return 0;
}
