#include<bits/stdc++.h>
#define lli long long int
using namespace std;
lli sum;
int main()
{
    int n;
    scanf("%d",&n);
    int a,b[n];
    for(int i=0; i<n; i++)scanf("%d",&a),sum+=a;
    for(int i=0; i<n; i++)scanf("%d",&b[i]);
    sort(b,b+n);
    if(b[n-2]+b[n-1]>=sum)printf("YES");
    else  printf("NO");
    return 0;
}
