#include<stdio.h>
int main(){
    char c;
    printf("enter a character: ");
    scanf("%c", &c);
    if(c>=97)
    c=c-32;
    if(c=='A' || c=='E' || c=='I' || c=='O' || c=='U')
    printf("ITS A VOWEL");
    else 
    printf("its a consonant");
    return 0;
}