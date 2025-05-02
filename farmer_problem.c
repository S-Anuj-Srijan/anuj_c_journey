/*A farmer wants to count the total number of apples in his orchard. Write a C program that
prompts the user to enter the number of apple trees and the average number of apples per tree.
The program should then calculate and display the total number of apples in the orchard.*/ 
#include<stdio.h>
void main(){
int no_trees,avverage_no_apples;
scanf("%d %d",&no_trees,&avverage_no_apples);
printf("the tottal no of apples are %d",no_trees*avverage_no_apples);
}