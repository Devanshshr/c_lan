#include<stdio.h>
int main(){
   int arr[3][3],i,j,l[3][3],arr2[3][3],n,sum = 0,k;
 
   printf("enter array :\n");
   for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        scanf("%d",&arr[i][j]);
    }
   }

printf("enter second array :\n");
   for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        scanf("%d",&arr2[i][j]);
    }
   }

printf("array you enter :\n");
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
printf("%d\t",arr[i][j]);
    }
    printf("\n");
   }

   printf("2 nd array you enter :\n");
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
printf("%d\t",arr2[i][j]);
    }
    printf("\n");
   
}


   for(i=0;i<3;i++){
    for(j=0;j<3;j++){
         l[i][j] = 0;
        for(k=0;k<3;k++){
    l[i][j] +=  arr[i][k]*arr2[k][j]; 

    }

   }

   }
printf("matrix multiplication:\n");
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
printf("%d\t",l[i][j]);
    }
    printf("\n");
   }


}


