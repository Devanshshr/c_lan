#include<stdio.h>
int main()
{
	int a;
	printf("enter a number=");
	scanf("%d",&a);
	a%2&&printf("odd");
	a%2||printf("even");
	return 0;
}
