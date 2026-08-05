#include<stdio.h>
int main (){
    char ch = 'A';
    char *ptr = &ch;

    while (*ptr <= 'Z'){
        printf("%c ",*ptr);
        (*ptr)++;
    }

    // while (ch <= 'Z')
    // {
    //   printf("%c ",ch)  ;
    //   ch++;
    // }
    
    return 0;
}