#include<stdio.h>
#include<string.h>
void main(){

    char anuj[100];
    scanf("%[^\n]",anuj);
    char *ptr_start; 
    char *ptr_temp_end_word;
    char *traversal_ptr=anuj;
    
    
    for (int i = 0; i < strlen(anuj); i++)
    {
        if (*(traversal_ptr+i)==" "||)
        {
            *ptr_temp_end_word=*traversal_ptr;
            while (ptr_start<ptr_temp_end_word)
            {
                char temp; 
                temp= *ptr_start;
                *ptr_start=*ptr_temp_end_word;
                *ptr_temp_end_word=temp;
                ptr_start++;
                ptr_temp_end_word--;
            }        
            *ptr_start=*traversal_ptr;  
        }
        
    }
    
        
        
    
    
    printf("%s",anuj);


}