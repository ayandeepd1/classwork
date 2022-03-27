#include<stdio.h>
int main(){
    float marks;
    printf("enter marks out of 100: ");
    scanf("%f", &marks);
    if(marks<=100 && marks >=90)
        printf("O grade");
    else if(marks<90 && marks >=80)
        printf("E grade");
    else if(marks<80 && marks >=70)
        printf("A grade");
    else if(marks<70 && marks >=60)
        printf("B grade");
    else if(marks<60 && marks >=50)
        printf("C grade");
    else if(marks<50 && marks >=40)
        printf("D grade");
    else if(marks<40 && marks>=0)
        printf("F grade");
    else    
        printf("wrong marks");

    return 0;    
}