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
   int n,m;
    scanf("%d %d",&n,&m);
   for(int i=n;i<=m;i++){
   if(O(i))
   printf(" even =%d",i);
   else
   printf(" odd =%d",i);
   }
  
  
}

