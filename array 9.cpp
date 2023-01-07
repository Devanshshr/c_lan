/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n,j=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        
    }
    int f;
    scanf("%d",&f);
    for(int i=0;i<n;i++)
    { if(a[i]==f)
    {
        if(a[i]%f==0)
        j++;
        
    }}
    printf("%d",j);

    return 0;
}

