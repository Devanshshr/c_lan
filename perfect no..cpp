// write a c program to check given number is perfect number or not.
#include<stdio.h>
int main()
{
	int a, sum=0;
	scanf("%d",&a);
	
	for(int i=1;i<a;i++)
	{
	if(a%i==0)
	sum=sum+i;
}
if(sum==a)
printf("perfect no.");
else
printf("not perfect");
	
}
