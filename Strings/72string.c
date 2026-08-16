#include<stdio.h>
#include<string.h>

int main(){
    char name[]="ZENIL";
    printf("THE LENGTH IS : %d\n",strlen(name));

    char str1[]="Hello";
    char str2[]="world";
    puts(str1);
    strcpy(str1,str2);
    puts(str1);

    char firstStr[100] = "Zenil ";
    char secondStr[] = "Patoliya";
    
    strcat(firstStr,secondStr);
    puts(firstStr);

    char A[] = "Apple";
    char B[] = "Ban";

    printf("%d",strcmp(A,B));

    return 0;
}