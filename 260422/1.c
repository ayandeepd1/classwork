#include<stdio.h>
int avg(int a, int b, int c){
    int avg=(a+b+c)/3;
    return avg;
}

int main(){
    printf("enter 3 numbers: ");
    int x,y,z;
    scanf("%d %d %d", &x, &y, &z);
    printf("\naverage of 3 nos = %d \n", avg(x,y,z));
    return 0;
}