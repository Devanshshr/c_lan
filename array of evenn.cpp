#include<stdio.h>
int main()
{
   int n,s=0,k=0;
	scanf("%d",&n);
	int a[n];
	int b[n-1];
	for(int i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(int i=0;i<n;i++)
	{
	    if(a[i]%2==0){
	   b[s]=a[i];
	   s++;
	}}
	for(int i=0;i<s;i++)
	printf("%d",b[i]);
    
}
