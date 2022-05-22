#include<stdio.h>
void print_ascii(char ch){
    printf("ascii of character: %d", ch);
}

int main(){
    char c;
    printf("enter a character: ");
    scanf("%c", &c);
    print_ascii(c);
    return 0;
}