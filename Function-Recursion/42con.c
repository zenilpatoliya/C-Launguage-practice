#include <stdio.h>
float convert (float n);


int main(){
    float n;
    printf("enter the value of n:");
     scanf("%f",&n);
    printf("the farnhit is :%f",convert(n));
    return 0;
}

float convert(float n){
    float far = n*(9.0/5.0)+32;
    return far;
    
}