/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int O(int a)
{
    if(a%2==0)
    return 1;
    else
    return 0;
    
}

int main()
{
   int n;
   scanf("%d",&n);
   int P=O(n);
   if(P==1)
   printf("even");
   else
   printf("odd");
  

    return 0;
}

