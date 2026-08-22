#include<stdio.h>
#include<string.h>

//user defined datatype
typedef struct ComputerEngineerStudent {
    int roll;
    float cgpa;
    char name[100];
} coe;

int main(){
    coe s1 ;
    s1.cgpa = 9.3;
    s1.roll = 139;
    strcpy(s1.name,"Rahul");

    printf("Name : %s\n",s1.name);
    return 0;
}