#include <stdio.h>
int main (){
    int n;
    int a=0 , b=1 ;
    printf("enter a number:");
    scanf("%d",&n);
    printf ("fibonacci series is\n");
    for(int i=1; i<=n ; i++){
        printf("%d ",a);
        int nxt = a + b;
        a=b;
        b=nxt;

    }
    return 0;
}