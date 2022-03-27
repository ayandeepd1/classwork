#include<stdio.h>
int main(){
    int a;
    printf("\ninput number: ");
    scanf("%d", &a);
    (a%5==0)?printf("divisible by 5"):printf("not divisible by 5");
    return 0;   
}