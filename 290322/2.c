#include<stdio.h>
int main(){
    int n;
    float x, result=1;
    printf("enter values of x and n: ");
    scanf("%f %d", &x, &n);
    for(int i=0; i<n; i++){
        result*=x;
    }
    printf("x^n= %f", result);
}