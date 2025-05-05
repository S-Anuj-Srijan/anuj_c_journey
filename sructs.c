//printf("student(%d) name:%s  roll no:%d  cgpa:%f",j+1,students[j].name,students[j].roll_no,students[j].cgpa);


#include<stdio.h>
#include<string.h>
struct student {
    char name[100];
    int roll_no;
    float cgpa;
};
void main(){
    int size;
    printf("enter the noo of students");
    scanf("%d",&size);
    struct student students[size];
    char temp[100];
    for (int i =0;i<size;i++){
        printf("enter name of student%d",i+1);
        scanf("%s",temp);
        strcpy(students[i].name,temp);
        getchar();
        printf("enter roll no of student%d",i+1);
        scanf("%d",&students[i].roll_no);
        printf("enter cgpa of student%d",i+1);
        scanf("%f",&students[i].cgpa);
        getchar();
    }
    struct student tempstudentinfo;
    for (int i =0;i<size;i++){
        for (int j =0;j<size;j++){
            if(j<size-1){
                if (students[j].cgpa<students[j+1].cgpa){
                    tempstudentinfo=students[j];
                    students[j]=students[j+1];
                    students[j+1]=tempstudentinfo;
                }
            }
        }
    }
    for (int j =0;j<size;j++){
        printf("student(%d) name:%s  roll no:%d  cgpa:%f",j+1,students[j].name,students[j].roll_no,students[j].cgpa);   
    }
    
}
