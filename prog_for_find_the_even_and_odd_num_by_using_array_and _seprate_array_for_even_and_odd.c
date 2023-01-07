#include<stdio.h>
int main(){
    int arr[56],len,i,n,pos= 0,neg = 0,zero =0 ;
int even[40],odd[50],e=0,o=0; j


    printf("enter n= ");
    scanf("%d",&n);

    printf("enter element :");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }


  for(i=0;i<n;i++){

    if(arr[i]%2==0){
        even[e] = arr[i];
e++;
    }
    else{
        odd[o] = arr[i];
o++;
    }
  }

printf("for even\n");
         for(i=0;i<e;i++){
         printf("%d\n",even[i]);
    
}
printf("for odd\n");
       for(i=0;i<o;i++){
         printf("%d\n",odd[i]);
    
}

}
