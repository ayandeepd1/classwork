#include<stdio.h>
int main(){
    char c[]="hello I love coding in C";
    for(int indx=0; indx<24; indx++){
        switch (c[indx]){   
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':   printf("%d %c\n", indx, c[indx]); 
                    break;
        }   
    }
    return 0;
}

