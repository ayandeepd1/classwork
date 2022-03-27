#include<stdio.h>
int main(){
    int n;
    printf("enter a number: ");
    scanf("%D", &n);
    for(int i=1; i<=n; i++){
        printf("%d x %d = %d\n", i, n, i*n);
    }
}