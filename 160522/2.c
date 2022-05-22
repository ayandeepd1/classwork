#include<stdio.h>
struct student{
    char name[20];
    int roll;
    char sect[10];
    int marks;
};

int main(){
    struct student std;
    struct student* ptr=&std;
    
    //struct student *ptr=std;
    printf("enter name: ");
    gets(std.name);
    
    printf("enter roll no: ");
    scanf("%d", &std.roll);
    getchar();
    
    printf("enter section:");
    gets(std.sect);
    
    printf("enter marks: ");
    scanf("%d", std.marks);    
    getchar();

    printf("name      \t roll\t section\t roll \n");
    printf("%-10s\t %d\t %s\t %d", ptr->name, ptr->roll, ptr->sect, ptr->roll);    
}