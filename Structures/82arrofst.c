#include<stdio.h>
#include<string.h>

//user defined datatype
struct student {
    int roll;
    float cgpa;
    char name[100];
};

int main(){
    struct student ECE[100];
    ECE[0].roll = 143;
    ECE[0].cgpa = 9.4;
    strcpy(ECE[0].name,"Parth");
    
    printf("student name : %s\n", ECE[0].name);    

    struct student s1 = {143, 9.6, "Zenil"};
    struct student s2 = {0};
    printf("Name : %s\n", s1.name);

    return 0;
}