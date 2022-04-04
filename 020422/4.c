#include<stdio.h>
int main(){
    char ar[4];
    for(int i=0; i<4; i++){
        printf("enter a number: ");
        scanf("%c", &ar[i]);
        getchar();
    }
    for(int i=0; i<4; i++){
        printf("%c", ar[i]);
    }
    
    return 0;
}