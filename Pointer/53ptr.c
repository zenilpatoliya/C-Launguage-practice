#include<stdio.h>
int main (){
    float price= 100.0;
    float *ptr = &price;
    printf("%u\n",ptr);
    ptr++;
     printf("%u\n",ptr);
      ptr--;
     printf("%u\n",ptr);

     char star= '*';
    char *ptr1 = &star;
    printf("%u\n",ptr1);
    ptr1++;
     printf("%u\n",ptr1);
      ptr1--;
     printf("%u\n",ptr1);
    return 0;
}