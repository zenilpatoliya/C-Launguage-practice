#include <stdio.h>
void storetable(int arr[][10],int n,int m,int number);
int main(){
    int table[2][10];
    storetable(table,0,10,2);
    storetable(table,1,10,3);
    
    return 0;
}

void storetable(int arr[][10],int n,int m,int number){
    for(int i=0; i<m; i++){
        arr[n][i] = number*(i+1);
        printf("%d\t",arr[n][i]);
    }
    printf("\n");
}