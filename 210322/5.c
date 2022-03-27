#include<stdio.h>
#include<math.h>
 int main(){
   printf("enter a vowel: ");
   char c;
   scanf("%c", &c);
   printf("output: ");
   switch(c){
       case 'a':printf("A");break;
       case 'e':printf("E");break;
       case 'i':printf("I");break;
       case 'o':printf("O");  break;
       case 'u':printf("U");  break;
       case 'A':printf("a");break;
       case 'E':printf("e");break;
       case 'I':printf("i");break;
       case 'O':printf("o");  break;
       case 'U':printf("u");  break;
       
       default:printf("not a vowel");
   }
   
   return 0;
 }
