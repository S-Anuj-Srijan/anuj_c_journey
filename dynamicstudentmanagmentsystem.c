#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct student {
    int roll_no;
};
int add_student(struct student *students,int count,int roll){
    students=realloc(students,(1+count)*sizeof(struct student));
    students[count].roll_no=roll;
    return count+1;
}
void delete_student(){
     printf("gone");
}
void print_all_students(struct student *students,int count){
     for (int i =0;i<count;i++){
        printf("student %d is %d",count+1,students[i].roll_no);

     }
}
void main(){
    int n=1;
    struct student *students = NULL;

    char input[100];
    printf("type add to add a student del to delete a student and print to print the current database then type done to exit\n");
    
    while (1){
        printf("input:");
        scanf("%[^\n]",input);
        if (strcmp(input, "add") == 0) {
            n=add_student(students,n,20);
        } else if (strcmp(input, "del") == 0) {
            delete_student();
        } else if (strcmp(input, "print") == 0) {
            print_all_students(students,n);
        } else if (strcmp(input, "done") == 0) {
            break;
        }
        getchar();
        strcpy(input,"none");
        



    }
    

}
