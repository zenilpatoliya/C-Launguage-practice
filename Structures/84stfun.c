#include<stdio.h>
#include<string.h>

//user defined datatype
struct student {
    int roll;
    float cgpa;
    char name[100];
};

void printInfo(struct student s1);

int main(){
    struct student s1 = {143, 9.6, "Zenil"};
    

    printInfo(s1);

    return 0;
}

void printInfo(struct student s1){
    printf("Student Information\n");
    printf("student name = %s\n", s1.name);
    printf("student roll.no = %d\n", s1.roll);
    printf("student cgpa = %f\n", s1.cgpa);
    
}