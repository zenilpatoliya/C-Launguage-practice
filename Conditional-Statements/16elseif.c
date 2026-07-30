#include <stdio.h>
int main(){
    int marks;
    printf("enter the value of marks");
    scanf("%d",&marks);

    if (marks > 90 && marks <= 100 ){
        printf("The given grade is A++");
    }
    else if(marks <= 90 && marks > 80){
         printf("The given grade is A+");
    }

     else if(marks <= 80 && marks > 70){
         printf("The given grade is A");
    }

    else if(marks <= 70 && marks > 60){
         printf("The given grade is B+");
    }

    else if(marks <= 60 && marks > 50){
         printf("The given grade is B");
    }

    else if(marks <=50 && marks > 40){
         printf("The given grade is B");
    }
    else {
        printf("The student is fail in this particular subject");
    }
    return 0;
}