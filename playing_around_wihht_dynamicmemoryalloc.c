#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct student 
{
    char name[100];
    int roll_no;
};
int main(){
    char temp[100];
    int n;
    scanf("%d",&n);
    struct student *students= (struct student *)malloc(n*sizeof(struct student));
    for(int i=0;i<n;i++){
        getchar();
        printf("enter name ");
        scanf("%[^\n]",temp);
        strcpy(students[i].name,temp);
        printf("enter rollno ");
        scanf("%d",&students[i].roll_no);
    }
    for(int i=0;i<n;i++){
        printf("%s",students[i].name);
        printf("%d",students[i].roll_no);

        
    }


    
   
}
