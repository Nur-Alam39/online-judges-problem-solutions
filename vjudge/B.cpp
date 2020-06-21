#include<bits/stdc++.h>
using namespace std;
int ans[1000005];
int main()
{
	int n;
	scanf("%d",&n);
	int a[n],b[n];
	for(int i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(int i=0;i<n;i++)
	scanf("%d",&b[i]);
	int l=0;
	for(int i=0;i<n;i++)
	{

		for(int j=i;j<n;j++)
		{
			if(b[j]==a[i])
			{
				for(int k=j;k>i;k--)
				{
					ans[l++]=k;
					swap(b[k-1],b[k]);
				}
				break;
			}
		}
	}
		cout<<l<<endl;
	for(int i=0;i<l;i++)
	{
		printf("%d %d\n",ans[i],ans[i]+1);
	}
}
