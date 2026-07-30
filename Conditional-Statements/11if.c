#include<stdio.h>
int main(){
    int age ;
    printf("enter the value of age:");
    scanf("%d",&age);

    if(age > 18) {
        printf("adult \n");
         printf("they can vote \n");
          printf("they can drive also \n");
    }

      else {
        printf("not adult \n");
      }

      printf("thank you");

      return 0;
    }
