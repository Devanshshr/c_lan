#include<stdio.h>
int main()
{
	int n,r,f,s=0;
	scanf("%d",&n);
	while(n){
		s+= n%10;
        n/= 10;
        if (s > 9)
        {
        s = n;
        n++;
    }
        
    }
	if(s==1)
	printf("magic");
	else
	printf("no");
}
