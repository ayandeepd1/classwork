#include<stdio.h>
int fact(int n){
    int fact=n;
    while(n-->1)
        fact*=n;
    return fact;
}
int main(){
    printf("factorial of 5 is: %d", fact(5));
    return 0;
}