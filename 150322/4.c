#include<math.h>
#include<stdio.h>
int main(){
    float a,b,c;
    printf("enter value of a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);
    float d=b*b-4*a*c;
    if (d<0){
        printf("imaginary roots");
        return 0;
    }
    float a1=((-1*b)+pow(d, 0.5))/(2*a);
    float a2=((-1*b)-pow(d, 0.5))/(2*a);
    printf("the 2 roots are: %f and %f", a1, a2);
}