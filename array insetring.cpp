
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
   int a[n+1];
   for(int i=0;i<n;i++)
   scanf("%d",&a[i]);
   int p,e;
   scanf("%d %d",&p,&e);
   for(int i=n;i>p;i--)
   a[i]=a[i-1];
   a[p]=e;
   for(int i=0;i<n+1;i++)
   printf("%d",a[i]);
   

    return 0;
}

