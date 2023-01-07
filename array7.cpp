#include<stdio.h>
int main()
{
	int n,t,j=0;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++)
	{
		for(int k=0;k<n-1;k++){
		
		if(a[i]>a[i+1])
		{
			t=a[i];
			a[i]=a[i+1];
	        a[i+1]=t;
			j=1; 
		}printf("%d",a[i]);
		
	}
	}
	
}
