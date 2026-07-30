#include <stdio.h>
int main(){
    int mark;
    printf("enter the marks (0-100):");
    scanf("%d",&mark);
    if(mark <= 30 ){
        printf("FAIL");
    }else if (mark > 30 && mark <= 100){
        printf("PASS");
    }
    else {
        printf("wrong marks");
    }


    return 0;
}