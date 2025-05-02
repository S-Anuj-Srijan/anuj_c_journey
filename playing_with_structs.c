#include<stdio.h>
#include<string.h>
struct book {
    char author[100];
    char title[100];
    float price ;
};

void main(){
    struct book library[3];

    for(int i = 0;i<3;i++){
        char temp;
        printf("enter the price");
        scanf("%f",&library[i].price);
        getchar();
        printf("enter the author name");
        scanf("%s",temp);
        strcpy(library[i].author,temp);
        getchar();
        printf("enter the title name");
        scanf("%s",temp);
        strcpy(library[i].title,temp);
        getchar();




    }
    
}