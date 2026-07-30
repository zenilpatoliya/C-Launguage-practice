#include <stdio.h>
int main(){
    char day;
    printf("enter a num 1-7 :");//1=monday 2=tue..
    scanf("%s",&day);

 switch (day) {
    case 1 : printf("the day is monday");
    break;
    case 2 : printf("the day is tuesday");
     break;
    case 4 : printf("the day is thursday");
     break;
    case 5 : printf("the day is friday");
     break;
    case 6 : printf("the day is saturday");
     break;
    case 7 : printf("the day is sunday");
     break;
     default : printf("the number is invalid");
 }  
 

return 0;
}