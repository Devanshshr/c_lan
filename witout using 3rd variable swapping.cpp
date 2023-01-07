#include <stdio.h>
int main()
{
	int a=1,b=20;
	b=a+b;
	a=b-a;
	b=b-a;
	printf("a = %d, b= %d",a,b);
	return 0;
}
