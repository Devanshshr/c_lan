#include<stdio.h>
#include<math.h>
void circle(int n)
{
	float d,c,a;
	d=n*2;
	printf("%f",d);
	c=(2*3.14)*n;
	printf("%f",c);
	a=3.14*(pow(n,2));
	printf("%f",a);
}
int main()
{
	int n;
	scanf("%d",n);
	circle(n);
}
