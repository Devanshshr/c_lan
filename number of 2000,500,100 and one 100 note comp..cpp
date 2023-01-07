#include<stdio.h>
int main()
{
	int A,T,F,H;
	scanf("%d",&A);
	A-=100;
	H=A/100;
	A=A%100;
	printf("100 notes are %d",(H+1));
	T=A/2000;
	A=A%2000;
	printf("2000 notes are %d",T);
	F=A/500;
	A=A%500;
	printf("500 notes are %d",F);
	return 0;
	
}
