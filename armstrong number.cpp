// write a c program to check given  number is armstrong or not
#include<stdio.h>
#include<math.h>
int main()
{
	int a,r,b=0,p,t,sum=0;
	scanf("%d",&a);
	t=a;
	while(a)
	{
	
	a=a/10;
	b++;
	}
	a=t;
	while(a)
	{
	r=a%10;
	sum=sum+pow(r,b);
	a=a/10;
	}
	
	if(sum==t)
	printf("arm");
	else
	printf("no");
	
	}
