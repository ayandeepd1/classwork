#include<stdio.h>

void fib_print(int f, int s, int n){
    if(n==0)
        printf("%d ", s);
    else{
        printf("%d ", s);
        fib_print(s, f+s, n-1);
    }         
}

int main(){
    int f=-1, s=1, n;
    printf("enter a number >3: ");
    scanf("%d", &n);
    fib_print(f, s, n);
}