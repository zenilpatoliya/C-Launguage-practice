#include<stdio.h>
int mypow(int base, int exp);
int main() {
    int base,exp;
    printf("enter the base :");
    scanf("%d",&base);
    printf("enter the exp :");
    scanf("%d",&exp);
    printf ("result  = %d", mypow(base,exp));
    return 0;
}

int mypow(int base, int exp){
    int result = 1;
    for(int i=1; i <= exp; i++){
        result = result*base;
    }
    return result;
}
