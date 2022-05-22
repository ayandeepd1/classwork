#include<stdio.h>
#include<string.h>
struct Student{
    char title[20], author[20], publication[20];
    int price;
};
int main(){
    struct  Student s1[5]={
        {"aladeen", "mustwash hands", "uriurza", 50},
        {"farming", "farmer aladeen", "muri kha", 56},    
        {"rant", "gedit sucks", "whomadeit?", 66},    
        {"ubuntu", "canonical bad", "Opensource", 36},    
        {"firefox", "master race", "i d care", 69},    
    };
    
    printf("\n\ntitle      \tauthor     \tpublication \tprice\n");
    for(int i=0; i<5; i++){
    printf("%-10s \t%-10s \t%-10s \t%d\n", s1[i].title, s1[i].author, s1[i].publication, s1[i].price);
    }

    char auth[20];
    char flag=0;
    printf("enter name of author: ");
    gets(auth);
    for(int i=0; i<5; i++){
        if(strcmp(auth, s1[i].author)==0){
            printf("found:\n");
            printf("%-10s \t%-10s \t%-10s \t%d\n", s1[i].title, s1[i].author, s1[i].publication, s1[i].price);
            flag=1;
            break;
        }
    }
    if(!flag)
        printf("not found");
    return 0;
}