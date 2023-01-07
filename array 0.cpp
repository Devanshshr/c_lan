//write a c program to check the frequency of all elements in an array
#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a[n],f[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        f[i]=0;
    }
    for(int i=0;i<n;i++)
    {int c=0;
	if(f[i]==0){
	 
    	for(int j=0;j<n;j++){
		
    	if(a[i]==a[j])
    	{
		c++;
    	f[j]=-1;
	 }}
	 printf("%d %d",a[i],c);
    }}
    
    
	
	}
