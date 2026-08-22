#include<stdio.h>
#include<string.h>

//user defined datatype
struct student {
    int roll;
    float cgpa;
    char name[100];
};

int main(){
    struct student s1 = {143, 9.6, "Zenil"};
    printf("Name : %s\n", s1.name);

    struct student *ptr = &s1;
    printf("roll.no : %d\n", (*ptr).roll);  //Format

    printf("roll.no : %d\n", ptr -> roll);
    printf("Name : %s\n", ptr -> name);
    printf("CGPA : %f\n", ptr -> cgpa);

    return 0;
}