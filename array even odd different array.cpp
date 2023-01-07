#include<stdio.h>
int main(){
    int e = 0,o =0,n,i;
    printf("eneter n = ");
    scanf("%d",&n);
    
    int a[n],even[n],odd[n];
    printf("enter arry = ");
    for(i =0;i<n;i++){
        scanf("%d",&a[i]);
    }
    
    
    printf("you enter :\n");
     for(i =0;i<n;i++){
        printf("%d\n",a[i]);
    }
     for(i =0;i<n;i++){
        if(a[i]%2==0){
        
            even[e] = a[i];
            e++;
        }
        else {
           odd[o] = a[i];
           o++;
    
        }
    }
    printf("for even\n");
     for(i =0;i<e;i++){
        printf(" %d\n",even[i]);
    }
      printf("for odd\n");
     for(i =0;i<o;i++){
        printf(" %d\n",odd[i]);
    }
    
    
    
}
