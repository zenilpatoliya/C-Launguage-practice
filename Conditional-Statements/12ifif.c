#include<stdio.h>
int main(){
    int number;
    printf("enter a number:");
    scanf("%d",&number);
if(number>= 0){
    printf("the number is positive\n");
    if(number % 2 == 0){
      printf("the number is even") ; 
    } else{
        printf("the number is odd");
    }
}
else {
     printf("the number is negative\n");
     
}
    return 0;
}