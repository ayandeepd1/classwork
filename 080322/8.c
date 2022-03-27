#include<stdio.h>
int main(){
    float temp_in_c, temp_in_f;
    printf("enter temperature in celcius: ");
    scanf("%f", &temp_in_c);
    temp_in_f=9.0*temp_in_c/5 + 32;
    printf("deg C in far= %f\n", temp_in_f);

}