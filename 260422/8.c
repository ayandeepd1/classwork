#include<stdio.h>

void fib_print(int n){
    int f=-1, s=1, t;
    for(int i=0; i<n; i++){
        t=f+s;
        f=s;
        s=t;
        printf("%d ", t);
    }
}

int main(){
    int n;
    printf("enter a no: ");
    scanf("%d", &n);
    fib_print(n);
}