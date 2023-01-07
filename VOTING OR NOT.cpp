#include<stdio.h>
int main()
{
	int A;
	scanf("%d",&A);
	A>=18&&printf("eligible");
	A<18&&printf("not eligible %d",18-A);
	return 0;
	
}
