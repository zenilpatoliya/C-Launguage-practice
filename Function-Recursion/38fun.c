#include <stdio.h>
float square(float side);
float circle(float radious);
float ract(float a,float b);


int main(){
    float side,radious,a,b;
    
    printf("enter side of square :");
    scanf("%f",&side);
printf("%f\n",square(side));

     printf("enter radious :");
         scanf("%f",&radious);  
printf("%f\n\n", circle(radious));

      printf("enter sides of rectangle :");
          scanf("%f %f",&a,&b);
          
          printf("%f",ract(a,b));
    return 0;
}



float square (float side){
return side*side;
}
float circle(float radious){
return 3.14*radious*radious;
}
float ract (float a, float b){
return a*b;
}