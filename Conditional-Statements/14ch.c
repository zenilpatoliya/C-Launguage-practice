#include <stdio.h>
int main (){
    char ch;
    printf("enter a char:");
    scanf("%c",&ch);
    if(ch >= 'a' && ch <= 'z'){
        printf("LOWER CASE CHAR\n");
    } else if (ch >= 'A' && ch <= 'Z'){
        printf("UPPER CASE CHAR\n");
    }
    else{
       printf("invalid char\n"); 
    }
    return 0;
}