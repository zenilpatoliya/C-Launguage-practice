#include<stdio.h>
#include<string.h>

struct complex {
    int real;
    int img;
};

typedef struct BankAccount {
    int acc;
    char name[100];
} acc;

int main(){
    struct complex n1 = {5,8};
    struct complex *ptr = &n1;
    printf("Img part : %d Real part : %d\n",ptr->img, ptr->real );

    acc a1 = {123, "Zenil"};
    acc a2 = {124, "Deep"};
    printf("acc no : %d ",a1.acc);
    printf("name : %s", a1.name);
    return 0;
}
