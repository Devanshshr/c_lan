#include<stdio.h>
int main()
{
	int n,s=0,t=0;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(int i=0;i<n;i++) 
	{
		if(a[i]%2==0)
		s=s+a[i];
		else
		t=t+a[i];
	}	
	printf("%d\n",s);
	printf("%d\n",t);
	if(s==t)
	printf("equal");
	else
	printf("not equal");
}
