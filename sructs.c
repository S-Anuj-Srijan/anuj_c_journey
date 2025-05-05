#include<stdio.h>
#include<string.h>
struct student {
char name[100];
int roll_no;
float cgpa; 


};
void main(){
    struct student anuj;
    char temp[100];
    scanf("%s",temp);
    strcpy(anuj.name,temp);
    getchar();
    scanf("%d",&anuj.roll_no);
    scanf("%f",&anuj.cgpa);
    printf("name:%s  rollno:%d  cgpa:%f",anuj.name,anuj.roll_no,anuj.cgpa);
}