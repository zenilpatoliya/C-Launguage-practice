#include <stdio.h>
#include<math.h>
float squareroot (float n);
int main (){
    float n;
    printf("enter a number :");
    scanf("%f",&n);
    printf("the square root  = %f",squareroot(n));
    return  0;
}

float squareroot (float n){
    return sqrt(n);
}