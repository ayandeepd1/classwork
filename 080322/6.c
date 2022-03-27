#include<stdio.h>
int main(){
    float b, h, area;
    printf("enter values of height and base: ");
    scanf("%f %f", &h, &b);
    area=0.5*b*h;
    printf("area= %f", area);
    return 0;
}