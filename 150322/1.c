#include<stdio.h>
int main(){
    int a;
    printf("\ninput number: ");
    scanf("%d", &a);
    printf("output ");
    (a%2==0)?printf("even %d", a/2):printf("odd %d", a*2);
   
}