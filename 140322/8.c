#include<stdio.h>
int main(){
    int a;
    printf("\ninput number: ");
    scanf("%d", &a);
    printf("odd/even checked with ternary operator\n");
    (a%2==0)?printf("even\n"):printf("odd\n");
   
}