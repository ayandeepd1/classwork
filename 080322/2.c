#include<stdio.h>
int main(){
    printf("enter a number: ");
    int a;
    scanf("%d", &a);
    if(a%2==0)
        printf("even");
    else
        printf("odd");
}