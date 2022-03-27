#include<stdio.h>
int main(){
    printf("enter 2 numbers: ");
    int a, b;
    int c;

    printf("enter 2 nums:");
    scanf("%d %d", &a, &b);
    c=a+b;
    printf("sum= %d\n", c);
    c=a-b;
    printf("diff= %d\n", c);
    c=a*b;
    printf("mul= %d\n", c);
    float c1=(float)a/b;
    printf("div= %f\n", c1);

}