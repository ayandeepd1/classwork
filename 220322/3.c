#include<stdio.h>
int main(){
    int n, sum=0;
    printf("enter a number: ");
    scanf("%D", &n);
    while (n>0)
    {
        sum+=n%10;
        n/=100;
    }
    printf("sum of digits in odd places: %d", sum);
}