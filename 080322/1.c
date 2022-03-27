#include<stdio.h>
int main(){
    int a, b;
    printf("enter values of a and b: ");
    scanf("%d %d", &a, &b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("after swapping without 3rd variable\nvalue of a and b are: %d %d", a, b);
     
}