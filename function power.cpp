#include<stdio.h>
int power(int a, int b)
{ int r=1;
	while(a!=0){
    	r=r*b;
    	--a;
    	}return r;
    
    	}
int main()
{
    int q,w,P;
    scanf("%d %d",&q,&w);
   printf("%d", power(q,w));
    
}
    
