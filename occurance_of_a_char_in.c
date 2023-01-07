#include<stdio.h>
#include<string.h>
int main(){
char arr[45],n;
int i,sum = 0,temp,j,r,count  =0,len;



printf("enter string= ");
gets(arr);
printf("enter your char = ");
scanf("%c",&n);


printf("string is = %s\n",arr);


len = strlen(arr);
for(i=0;i<=len;i++){
  if(arr[i]==n){
    count++;
  }
  

}
printf("your char %c repeats %d times : ",n,count);

}
  
