#include<stdio.h>
int main(){
    int a, b, c;
    printf("enter values of a and b: ");
    scanf("%d %d", &a, &b);
    c=a;
    a=b;
    b=c;
    printf("after swapping with 3rd variable\nvalue of a and b are: %d %d", a, b);
     
}