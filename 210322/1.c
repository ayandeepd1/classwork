#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter 3 numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    int max=a>b?(a>c?a:c):(b>c?b:c);
    int min=a<b?(a<c?a:c):(b<c?b:c);
    int s_max=a + b + c - max - min;
    printf("second largest: %d", s_max);
}