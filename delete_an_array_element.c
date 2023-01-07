#include<stdio.h>
int main(){
    int arr[30],n,i,pos,count=0,value;
    printf("enter array size = ");
    scanf("%d",&n);

    printf("enetr array :\n");
for(i=0;i<n;i++){
    scanf("%d",&arr[i]);

}

printf("array is = ");
for(i=0;i<n;i++){
    printf("%d\n",arr[i]);

}

printf("enter your value for delete fro array : ");
scanf("%d",&value);


for(i=0;i<n;i++){

if(arr[i] ==value){
    count++;
    pos = i;
    break;
}
}

if(count==1){
for(i = pos;i<n-1;i++){
    arr[i] = arr[i+1];
}    
}

else{
    printf("ment %d is not in array ",value);
}


printf("array after deletion of element \n"); 

for(i = 0;i<n-1;i++){
    printf("%d\n",arr[i]);
}    




}
