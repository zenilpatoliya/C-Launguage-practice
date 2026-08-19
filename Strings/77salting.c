#include<stdio.h>
#include<string.h>

void solting(char pass[]);

int main(){
   
    char pass[100];
    scanf("%s", pass); 
    solting(pass);
    return 0;
}

void solting(char pass[]){
    char salt[] = "123";
    char newpass[100] ;
    strcpy(newpass,pass);
    strcat(newpass,salt);
    puts(newpass);
}