#include <stdio.h>
void gst(float n);
int main(){
    float n;
    printf("enter the price:");
    scanf("%f",&n);
    gst(n);
   
    return 0;
}

void gst(float n){
   n = n + (.18*n);
    printf("%f",n);
}   