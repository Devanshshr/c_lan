#include<stdio.h>
int main()
{
	int n,s=0,t,i=0;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	scanf("%d",&a[i]);
	while(s<i){
		t=a[i];
		a[i]=a[s];
		a[s]=t;
		i++;
		s--;
		
	}
	printf("%d",a[i]);
	printf("%d",a[s]);
}
