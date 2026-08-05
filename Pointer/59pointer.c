#include<stdio.h>
int main (){
    int a,b,*ptr1,*ptr2;
    printf ("entre two numbers :");
    scanf("%d %d",&a,&b);
    ptr1 = &a;
    ptr2 = &b;
    if(*ptr1 > *ptr2){
        printf ("maximum number is %d", *ptr1);
    }
    else if (*ptr1 == *ptr2)
    {
         printf("both number are same");
    }
    
    else{
        printf  ("maximum number is %d", *ptr2);
    }
return 0;
}