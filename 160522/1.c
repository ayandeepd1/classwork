#include<stdio.h>
struct Book{
    char name[20];
    char author[20];
    int price;
};

int main(){
    struct Book book1, book2;
    printf("enter name: ");
    scanf("%s",book1.name);
    printf("enter author: ");
    scanf("%s",book1.author);
    printf("enter price: ");
    scanf("%d",&book1.price);

    printf("enter name: ");
    scanf("%s",book2.name);
    printf("enter author: ");
    scanf("%s",book2.author);
    printf("enter price: ");
    scanf("%d",&book2.price);

    printf("%s \t %s\n", book1.name, book2.name);
    printf("%s \t %s\n", book1.author, book2.author);
    printf("%d \t %d", book1.price, book2.price);
}