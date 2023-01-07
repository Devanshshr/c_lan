/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <math.h>
int O(int a)
{int i;
    for( i=2;i<a;i++){
    if(a%i==0)
    return 0;
	}
    return i;
    
    
    
}

int main()
{
   int n;
   scanf("%d",&n);
   for(int i=pow(10,n-1);i<pow(10,n);i++){
   if(O(i))
   printf("%d \n",i);
 }
   
  
  
}

