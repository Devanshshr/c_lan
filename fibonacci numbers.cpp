#include <stdio.h>
int main()
{
	int a=0,b=1,c,n;
	scanf("%d",&n);
	while(a<=n)
	{
		if(a==n)
		{
			f=1;
			printf("Yes");
			break;
		}
		c=a+b;
		a=b;
		b=c;
	
		c++;
		i++;
	}if(n==c)
	printf("fibnocii");
	else
	printf("No");
}
