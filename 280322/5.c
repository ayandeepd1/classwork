#include<stdio.h>
int main(){
    printf("enter number of rows: ");
    int n;
    scanf("%D", &n);
    for(int i=0; i<n; i++){
        for(int j=n; j>n-i-1; j--)
            printf("%d ", j);
        printf("\n");
    }

    for(int i=0; i<n; i++){
        for(int j=n-1; j>i; j--)
            printf(" ");
        for(int j=0; j<i; j++)
            printf("*");
        printf("\n");
    }
    for(int i=n; i>0; i--){
        for(int j=1; j<=i; j++)
            printf("%d ", j);
        printf("\n");
    }
    printf("\n");

    for(int i=2; i<=n+1; i++){
        for(int j=i; j<=n+1; j++)
            printf("%d ", j);
        printf("\n");
    }
}