#include<stdio.h>
int main(){
    int age = 22;
    int _age = 23;
    int *ptr1 = &age;
    int *ptr2 = &_age;
    printf("%u ,%u\ndiffarence is = %u\n",ptr1,ptr2,(ptr1 - ptr2));
    ptr2 = &age;
    printf("comparison is = %u",(ptr2  ==  ptr1));   
    return 0 ;
}