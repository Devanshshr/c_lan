#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	scanf("%d",&a[i]);
	int p;
	scanf("%d",&p);
	for(int i=0;i<n;i++){
		if(a[i]==p)
		printf("%d",i);
	}
	
}
