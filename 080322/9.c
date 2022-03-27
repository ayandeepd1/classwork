#include<stdio.h>
#include<math.h>
int main(){
    double si, ci;
    float p=1000, r=3, t=5;
    si=p*r*t/100;
    printf("simple interest is: %0.2lf\n", si);
    ci=p*pow((1+r/100),t) - p;
    printf("compound interest is: %0.2lf\n", ci);
    return 0;

}