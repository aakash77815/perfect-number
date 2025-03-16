#include<stdio.h>
int main(){
 int num;
 int sum=0;
 scanf("%d",&num);
 for(int i=1;i<num;i++){
     if(num%i==0){
        sum=sum+i;
     }
 }
    if (sum==num){
        printf("%d is perfect num",num);
    }
    else{
        printf("%d is not a perfect num",num);
    }

 return 0;
}