#include<stdio.h>
#include<ctype.h>
int main(){
    printf("enter a character: ")
    char c;
    scanf("%c", &c);
    printf("alphabet: %s", (isalpha(c))?"true":"false");
    printf("digit: %s", (isdigit(c))?"true":"false");
    printf("puntuation: %s", (ispunct(c))?"true":"false");
    printf("printable: %s", (isprint(c))?"true":"false");
    return 0;
}