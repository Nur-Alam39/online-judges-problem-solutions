#include<bits/stdc++.h>
using namespace std;
int main()
{
	int tc,n,c,d;
	scanf("%d",&tc);
	while(tc--)
	{
		scanf("%d",&n),c=0;
		if(n==2){
            printf("First\n");
            continue;
		}
		while(n!=0)
		{
		    d=n%2;
		    if(d)c++;
		    n/=2;
		}
		if(c%2)printf("First\n");
		else printf("Second\n");
	}
	return 0;
}
