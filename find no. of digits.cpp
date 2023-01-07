// write a c program to find number of digits in a given number 
#include<stdio.h>
int main()
{
	int a,r,b=0;
	scanf("%d",&a);
	while(a!=0)
	{
	r=a%10;
	b++;
	a=a/10;}
	printf("%d", b);
}
