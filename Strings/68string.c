#include<stdio.h>
void printString(char arr[]);
int main(){
    char firstname[]="ZENIL";
    char lastname[]="PATOLIYA";
    printString(firstname);
    printString(lastname);

    // printf("%s ",firstname);
    //  printf("%s",lastname);
    return 0;
}

void printString(char arr[]){
    for(int i=0; arr[i]!='\0'; i++){
        printf("%c",arr[i]);
    }
      printf(" ");
}