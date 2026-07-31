#include <stdio.h>
int main(){
    int n;
    printf("enter a number : ");
    scanf("%d",&n);
    int fact=1;
    for(int i=1;n>=i;i++){
        fact *= i;
    }
    printf("factorial is %d",fact);
    
    return 0;
}