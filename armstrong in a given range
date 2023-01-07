#include<stdio.h>
#include<math.h>
int armstrong(int n);
int main(){
int n,i;
printf("enter n =");
scanf("%d",&n);

for(i=pow(10,n-1);i<pow(10,n);i++){
    if(armstrong(i)){
        printf("%d\n",i);
    }
}
}

int armstrong(int n){
    int r,sum = 0,c;
    c = n;
    while(n>0){
        r = n%10;
        sum = sum+(r*r*r);
        n = n/10;
    }
    if(c==sum){
        return 1;
    }
    else{
        return 0;
    }
}
