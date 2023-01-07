#include<stdio.h>
#include<math.h>
int main()
{
	int k,a,b,j,l;
	scanf("%d %d",&a,&b);
	j=b-1;
	l=pow(2,j);
	k=a|l;
	if(k==a)
	{
		printf("set(1)");
	}
	else
	{
	printf("unset(0)");	
	}
}
