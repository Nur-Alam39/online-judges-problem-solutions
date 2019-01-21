#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,an,bn,h,la,lb;
    scanf("%d",&n);
    cin.ignore();
    char a[100],b[100];
    for(int i=0; i<n; i++)
    {
        scanf("%s%s",&a,&b);
        an=bn=0,h=0,la=strlen(a),lb=strlen(b);
        for(int j=la-1,p=0; j>=0; j--,p++)if(a[j]=='1')an+=pow(2,p);
        for(int j=lb-1,p=0; j>=0; j--,p++)if(b[j]=='1')bn+=pow(2,p);
        if(an>bn)swap(an,bn);
        int d=__gcd(an,bn);
        if(d!=1)printf("Pair #%d: All you need is love!\n",i+1);
        else printf("Pair #%d: Love is not all you need!\n",i+1);
    }
    return 0;
}
