#include<stdio.h>
int find_div(int a, int b){
    if(b==0)
        return -1;
    else if(a==0)
        return 0;
    else if(b==1)
        return a;
    else if(a<b)
        return 0;
    else
        return 1+find_div(a-b, b);
}

int main(){
    int a,b;
    printf("enter dividend and divisor: ");
    scanf("%d %d", &a, &b);
    printf("quotient: %d", find_div(a,b));
}