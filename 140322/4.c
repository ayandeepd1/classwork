#include <stdio.h>
#include<math.h>
int main(){
  
   int sa, sb, sc;
   printf("input 3 sides: ");
   scanf("%d %d %d", &sa, &sb, &sc);
   float s=1.0*(sa+sb+sc)/2;
   float ar=sqrt(1.0*s*(s-sa)*(s-sb)*(s-sc));
   printf("\narea of triangle: %f", ar);
   return 0;   
}