#include<stdio.h>
int main()
{ 
int n ,i,l,r,sum=0;
scanf("%d",&n);
 r=n%10;
 printf("%d",r);
 while(n>=10)
 { 
     n=n/10;
   
 }
	printf("%d",n);
	sum=n+r;
	printf("%d",sum);
}
