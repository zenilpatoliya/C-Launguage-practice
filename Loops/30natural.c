#include<stdio.h>
int main(){
    int num;
    printf ("enter a number:");
    scanf("%d",num);
    if (num >= 1){
        printf("the number is natural");
    }
    else {
        printf("the given number is not natural");
    }
    return 0;
}