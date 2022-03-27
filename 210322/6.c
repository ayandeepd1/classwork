#include<stdio.h>
#include<math.h>
int main(){
    int n;
    printf("enter a number: ");
    scanf("%d", &n);
    (n%7==0)?printf("output: %f", pow(n,2)):printf("output: %f", pow(n,3));
    return 0;
}