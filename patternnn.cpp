// pattern 1 
#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	for(int i=1;i<=a;i++)
	{
	for(int j=(a-1);j>=i;j--)
	{
	printf(" ");
	 for(int k=1;k<=i;k++);
	printf("*");
	}
	printf("\n");
}
	
	
}
