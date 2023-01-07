// write a c program to check given number is strong number peterson krishnamurty robinson
#include<stdio.h>
int main(){

int n,f,t, sum=0;
	scanf("%d",&n);
	t=n;
	while(n>0)
	{
		int r=n%10;
		f=1;
     for(int i=1;i<=r;i++){
	 
     f=f*i;}
    sum=sum+f;
     n=n/10;
}
if(sum==t)
printf("strong");
else
printf("not");
}	

