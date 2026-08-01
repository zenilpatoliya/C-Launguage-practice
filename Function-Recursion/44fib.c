#include <stdio.h>
int fib (int n);
int main(){
    int n;
    printf("enter a number");
    scanf("%d",&n);
    printf("%d",fib(n));
    return 0;
}

int fib(int n){
   
    if (n==0 ){ 
        return 0;
    }
    if (n==1){
        return 1;
    }

    int fibm1= fib(n-1);
    int fibm2=fib (n-2);
    int fib = fibm1 + fibm2;
    return fib;

}