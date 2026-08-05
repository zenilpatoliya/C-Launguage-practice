#include<stdio.h>
int main(){
    // float price = 32.32;
    // float *ptr= &price;
    // float **pptr= &ptr;

    int i = 5;
    int *ptr = &i;
    int **pptr = &ptr;
    printf("%d",**pptr);
 
    return 0;
}
