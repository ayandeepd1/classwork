#include<stdio.h>

char is_prime(int n){
    int count=0;
    for(int i=1; i<=n/2; i++)
        if(!(n%i))
            count++;
    return count-1;
}

int main(){
    int n;
    printf("enter a number: ");
    scanf("%d", &n);
    printf("number entered is: %sprime", is_prime(n)?"not ":""); 
}