// write a c program to left rotate a given array by r number of rotations 
#include <stdio.h>

int main()
{
    int n,j=0;
    scanf("%d",&n);
    int a[n],r;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        
    }
    scanf("%d",&r);
    r=r%10;//to reduce no. of rotations 
    for(int k=0;k<=r;k++){
	
    int t=a[0];
    for(int i=0;i<n;i++)
    a[i]=a[i+1];
    a[n-1]=t;}
    for(int i=0;i<n;i++)
    printf("%d",a[i]);
    }
