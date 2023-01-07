#include<stdio.h>
#include<math.h>
int strong(int n)
{
int f,t, sum=0;
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
return sum;
else
return 0;
}	
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=pow(10,n-1);i<pow(10,n);i++){
   if(strong(i))
   printf("%d \n",i);
}
}
