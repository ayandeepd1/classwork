#include<stdio.h>
int main(){
    int n, sum=0;
    printf("enter a number: ");
    scanf("%d", &n);
    while (n>0)
    {
        if((n%10)%2)
            sum+=n%10;
        n/=10;
    }
    printf("sum of odd digits : %d", sum);
}