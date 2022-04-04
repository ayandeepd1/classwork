#include<stdio.h>
int main(){
    int ar[20];
    for(int i=0; i<5; i++){
        printf("enter a number: ");
        scanf("%d", &ar[i]);
    }
    int sum=0;
    for(int i=0; i<5; i++){
        sum+=ar[i];
    }
    printf("%d", sum);
    return 0;
}