#include<stdio.h>
#include<math.h>
 int main(){
   printf("a: addition\ns: subtraction\nm:multiplication\nd: division\nenter character: ");
   char c;
   scanf("%c", &c);

   printf("enter 2 nos:");
   int a,b;
   scanf("%d %d", &a, &b);
   
   switch(c){
       case 'a':printf("addition: %d\n", a+b);break;
       case 's':printf("subtraction: %d\n", a-b);break;
       case 'm':printf("mul: %d\n", a*b);break;
       case 'd':printf("division: %f\n", 1.0*a/b);  break;
       default:printf("wrong input");
   }
   
   return 0;
 }
