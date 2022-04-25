#include<stdio.h>
int main(){
    int n;
    printf("enter value of n: ");
    scanf("%d", &n);
    int fib[n];
    int f=-1, s=1, t;
    for(int i=0; i<n; i++){
        t=f+s;
        f=s;s=t;
        fib[i]=t;
    }
    for(int i=0; i<n; i++){
        printf("%d ", fib[i]);
    }
}