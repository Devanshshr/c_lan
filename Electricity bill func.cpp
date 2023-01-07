/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int EBS(int a)
{ float r;
    if(a>0&&a<101)
    {
        r=a*2;
    }
    else if(a>100&&a<201)
    {
        r=a*3.50;
    }
    else if(a>200)
    {
        r=a*4.50;
    }
    return r;
}
int main()
{
    int n;
    scanf("%d",&n);
    int T=EBS(n);
    float total_bill=T*0.1+T;
    printf("%0.2f",total_bill);
    
}


