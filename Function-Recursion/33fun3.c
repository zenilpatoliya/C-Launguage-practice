#include <stdio.h>
void Namaste ();
void Bonjour ();
int main() {
char ch;
    printf("enter 'f' for french and 'i' for indian:");
    scanf("%c",&ch);
    if(ch == 'i'){
        Namaste();
    }
    else if(ch == 'f'){
        Bonjour();
    }
    else {
        printf("chosen wrong char. ");
    }


     return 0;
}
void Namaste (){
    printf("Namaste\n");

}
void Bonjour () {
    printf("Bonjour\n");
}