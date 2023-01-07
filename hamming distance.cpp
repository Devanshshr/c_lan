/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ar[10];
    for(int i=0;i<n;i++)
    {
    	while(n){
		
        if(n%2==0)
        ar[i]=1;
        else
        ar[i]=0;
		n=n/10;
		}
    }

  for(int i=0;i<n;i++)
{
   printf("%d",ar[i]);
  
}
}


