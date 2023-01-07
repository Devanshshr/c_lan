#include<stdio.h>
int main()
{
	int a,sum=0,r; 
	scanf("%d",&a);
	while (a>=0)
	{    r=a%10;
		sum=sum+r;
		r++;
		a=a/10;
		if(sum>9)
		a=sum;
}   
if(sum==1)
printf("magic no.");
else
printf("no");
}
