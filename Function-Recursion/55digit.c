#include<stdio.h>
int sdigit(int n);
int main(){
    int n;
    printf("enter a number :");
    scanf("%d",&n);
    printf("the sum is : %d",sdigit(n));
    return 0;
}


int sdigit(int n){
    int sum = 0;
    while (n >0)
    {  sum = sum + (n % 10);
       n = n / 10; }
       
    return sum ;

}