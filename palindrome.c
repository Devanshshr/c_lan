#include <stdio.h>
#include <string.h>
int main()
{
char s1[100],s2[100],n;
scanf("%[^\n]s",s1);
n=strlen(s1);
int c=0;
printf("%s",s2);
for(int i=0;i<100;i++)
{{for(int j=n;j<n;j--)
	if(s2[j]=s1[i])
	break;
	else
	c++;
}}
if(c==0)
printf("pelindrome");
else
printf("no");
}
