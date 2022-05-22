#include<stdio.h>
#include<ctype.h>
int main(){
    int n;
    printf("enter size array: ");
    scanf("%d", &n);
    char a[n];

    getchar();
    for(int i=0; i<n; i++){
        printf("enter value for a: ");
        a[i]=getchar();
        getchar();
    }

    for(int i=0; i<n; i++){
        printf("%d %c", i, a[i]);
        if(isdigit(a[i]))
            printf(" digit\n");
        else if(isalpha(a[i]))
            printf(" alphabet\n");
        else 
            printf(" special character\n");
    }

}
