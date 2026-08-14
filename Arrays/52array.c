#include <stdio.h>
int main(){
    float price[3];
    printf("enter three numbers:");
    scanf("%f %f %f", &price[0], &price[1], &price[2]);
    
    
    printf("price with gst is :%f\n",price[0]+(price[0]*(.18)));
    printf("price with gst is :%f\n",price[1]+(price[1]*(.18)));
    printf("price with gst is :%f\n",price[2]+(price[2]*(.18)));
    return 0;
}