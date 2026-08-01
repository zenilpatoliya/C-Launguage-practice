#include <stdio.h>
float percantage (float s,float m,float san);


int main(){
    float s,m,san;
    printf("enter the value of science mark:");
     scanf("%f",&s);

      printf("enter the value of maths mark:");
      scanf("%f",&m);

   printf("enter the value of sanskrit mark:");
      scanf("%f",&san);

    printf("the percantage is :%f",percantage(s,m,san));
    return 0;
}

float percantage (float s, float m, float san){
    
    return (s+m+san)/3;

}