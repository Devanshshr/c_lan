#include<stdio.h>
#include<string.h>
int main(){
    char arr[78];
    int n,i,j,count=0,len;

printf("\n************************************\n");
printf("enter string = ");
gets(arr);

len  = strlen(arr)-1;

printf("\n************************************\n");
printf("array in reverse arry = ");
while(len>0){
    printf("%c",arr[len]);
    len--;
}
printf("\n************************************\n");

}
