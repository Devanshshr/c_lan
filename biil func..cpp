/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int bill(int a)
{ int r,t;
    r=a+a*(0.2);
    t=r+r*(0.15);
    return t;
    
}
int main()
{
    int n,total_bill;
    scanf("%d",&n);
    total_bill=bill(n);
    printf("%d",total_bill);
}
