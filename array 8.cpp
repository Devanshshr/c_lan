#include<stdio.h>
int main()
{
	int n,j=0,k=0; 
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++)
	{
		if(a[i]%2==0)
		a[i]=j;
		printf("a[j] = %d",a[j]);
		
	}
	for(int i=0;i<n;i++)
	{
		if(a[i]%2!=0)
		a[i]=k;
		printf("a[k] = %d",a[k]);
	}
}
