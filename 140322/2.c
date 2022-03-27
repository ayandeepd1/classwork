#include<stdio.h>
#include<math.h>
 int main(){
   char c;
   printf("\nenter c for circle, r for rectangle and s for square");
   scanf("%c", &c);
   if(c== 'c'){
     int r=0;
     printf("\nenter value of radius: ");
     scanf("%d", &r);
     printf("\narea of circle %f", 3.14*r*r);
     }
   
   else if(c=='r'){
    int l,b;
    printf("\nenter length and breadth: ");
    scanf("%d %d", &l, &b);
    printf("\narea of rectangle is: %d", l*b);
    }
  
  else if (c=='s'){
    int s;
    printf("\nenter side of square: ");
    scanf("%d", &s);
    printf("area of square: %d", s*s);
    }

   else
     printf("wrong input");

  return 0;   
 }