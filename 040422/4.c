#include<stdio.h>
int main(){
    int i, n;
    printf("enter value of n: ");
    scanf("%d", &n);
    char a[n];
    for(int i=0; i<n; i++){
        getchar();
        printf("enter character: ");
        scanf("%c", &a[i]);  
    }
    getchar();
    
    char ch, f=0;
    printf("enter character to be searched: ");
    scanf("%c", &ch);
    for(i=0; i<n; i++){
        if(ch==a[i]){
            f=1;
            break;
        }
    }
    if(f)
        printf("character was found at index: %d", i);
    else    
        printf("character was not found");

    return 0;
}