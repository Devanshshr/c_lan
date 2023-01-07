#include <stdio.h>
int main()
{ 
int a=12,b=5,c;
c=b;
b=a;
a=c;
printf("a= %d  b= %d ",a,b);
return 0;
}
