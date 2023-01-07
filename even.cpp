#include<stdio.h>
int main(){
    int a;
	printf("enter a number=");
	scanf("%d",&a);
	a&1&&printf("odd");
	a&1||printf("even");
	return 0;
}
	
	

