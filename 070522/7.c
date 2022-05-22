#include<stdio.h>
int find_vowel(int n, char *arr){
    int count=0;
    for(int i=0; i<n; i++)
        switch(arr[i]){
               case 'a':
               case 'e':
               case 'i':
               case 'o':
               case 'u':
               case 'A':
               case 'E':
               case 'I':
               case 'O':
               case 'U':count++; printf("address: %p\n", &arr[i]);
                        break;
        }
    return count;
}
int main(){
    int n;
    printf("enter number of elements: ");
    scanf("%d", &n);
    char arr[n];
    for(int i=0; i<n; i++){
        printf("enter element:");
        scanf(" %c", &arr[i]);
    }
    printf("total vowels=%d", find_vowel(n,arr));
    return 0;
}