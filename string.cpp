/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <string.h>
int main()
{
char s1[100],s2[100],a;
scanf("%[^\n]s",s1);
strlwr(s1);
strcpy(s1,s2);
strrev(s2);
a=strcmp(s1,s2);
if(a==0)
printf("pelindrome");
else
printf("n0");
}
