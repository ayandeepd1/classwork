#include<stdio.h>
int main(){
    int roll, sum=0;
    printf("enter rollL: ");
    scanf("%d", &roll);
    while (roll>0)
    {
        sum+=roll%10;
        roll/=10;
    }
    printf("sum of roll digits: %d", sum);
    return 0;
}