#include<stdio.h>
#include<string.h>

void check(char str[], char x);

int main(){
   char str[] = "HelloWorld";
   char x = 'e';
   check(str,x);
    
    return 0;
}

void check(char str[], char x){
    for(int i=0; str[i] != '\0'; i++){
        if(str[i] == x){
            printf("Char is present");
            return;
        }
    }
    printf("char is NOT present");

}

