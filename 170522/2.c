#include<stdio.h>
#include<string.h>
struct Student{
    char name[20], desg[20], dept[20];
    char gend;
    float basic, gross;
};

int main(){
    struct  Student s1[5]={
        {"yallen kay", "manager", "sales", 'M', 1000, 0},
        {"fallen gay", "staff", "production", 'F', 2000, 0},    
        {"rotten pay", "staff", "research", 'M', 1500, 0},    
        {"tottem day", "maintainer", "production", 'F', 2500, 0},    
        {"poppen say", "supervisor", "marketing", 'M', 3000, 0},    
    };
    for(int i=0; i<5; i++){
        s1[i].gross=s1[i].basic + 0.25*s1[i].basic + 0.75*s1[i].basic;
    }

    printf("\n\nname      \tdesignation\tdepartment\tgender \tgross pay\n");
    for(int i=0; i<5; i++){
    printf("%-10s \t%-10s \t%-10s \t%c \t%0.2f\n", s1[i].name, s1[i].desg, s1[i].dept, s1[i].gend, s1[i].gross);
    }

    return 0;
}