#include<stdio.h>
int main(){
    char c;
    printf("enter a character: ");
    scanf("%c", &c);
    if(c>=65 && c<=90)
    c+=32;
    else if(c>=97 && c<=122)
    c-=32;
    else{
        printf("not an alphabetic letter");
        return 0;
    }
    printf("output: %c", c);
}