#include<stdio.h>
int main(){
  int arr[39],n,i,count=0,j,freq[89];
printf("enter n = ");
scanf("%d",&n);

  printf("enter array :\n");
    for(i=0;i<n;i++){
      scanf("%d",&arr[i]);
    }
  

for(i=0;i<n;i++){
  count = 1;
  if(arr[i]!=-1){
    for(j= i+1;j<n;j++){
      if(arr[i]==arr[j]){
        count++;
        arr[j] = -1;
      }
    }
    freq[i] = count;
  }
}

for(i=0;i<n;i++){
  if(arr[i]!=-1){
    printf("%d element repets %d times \n",arr[i],freq[i]);
  }
}    
  }
 
