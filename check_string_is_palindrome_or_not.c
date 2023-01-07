#include<stdio.h>
#include<string.h>
int main(){
    char arr[78];
    int n,j,count=0,len,i=0;

printf("\n************************************\n");
printf("enter string = ");
scanf("%s",arr);

j  = strlen(arr)-1;


while(j>0){
if(arr[i]==arr[j]){
count =1;
}

    i++;
    j--;

}
printf("\n************************************\n");
if(count==1){
    printf("string is palindrome :");
}
else{
    printf("not palindrome:");
}

printf("\n************************************\n");

}
