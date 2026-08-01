#include <stdio.h>
void printhw(int n);
int main(){

    printhw(5);
    return 0;
}

void printhw(int n){
    if( n== 0){
        return;
    }
    printf("Hello World\n");
    printhw( n - 1); 
}