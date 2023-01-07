#include<stdio.h>
void even(int a)
{
    if(a%2==0)
    printf("even");
    else
    printf("odd");
    
}
int main()
{
    int n;
    scanf("%d",&n);
    even(n);
}
    
