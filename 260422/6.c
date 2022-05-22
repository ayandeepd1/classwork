#include<stdio.h>
float convert(float c){
    float f=c*9/5 +32;
    return f;
}
int main(){
    printf("100degrees Celcius = %f Fahrenheit", convert(100));
    return 0;
}