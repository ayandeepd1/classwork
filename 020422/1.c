#include<stdio.h>
int main(){
    int ar[20];
    for(int i=0; i<20; i++){
        printf("enter a number: ");
        scanf("%d", &ar[i]);
    }
    for(int i=0; i<20; i++){
        printf("%d ", ar[i]);
    }
    return 0;
    

}