#include<stdio.h>
int main(){
    int a[5], b[5];
    printf("enter values of 1st array:\n");
    for(int i=0; i<5; i++){
        printf("enter a value: ");
        scanf("%d", &a[i]);
    }
    printf("enter values of 2nd array:\n");
    for(int i=0; i<5; i++){
        printf("enter a value: ");
        scanf("%d", &b[i]);
    }

    int c[5];
    
    for(int i=0; i<5; i++){
        c[i]=a[i]+b[i];
    }
    
    for(int i=0; i<5; i++){
        printf("%d ", c[i]);
    }
}