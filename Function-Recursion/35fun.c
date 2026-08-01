#include <stdio.h>
void table (int x);
int main() {
    int n;
    printf("enter the  number:");
    scanf("%d",&n);


    table(n);


return 0;
}

void table (int x){
    for(int i =1;i<=10;i++){
        printf("%d\n",i*x);
    }
}