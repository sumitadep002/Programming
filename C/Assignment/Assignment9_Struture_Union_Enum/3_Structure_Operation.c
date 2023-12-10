/*
In the student structure created above modify marks member as an 
array(array of 5 subjects), create an array of struct variables and do 
some input,output operations.(Marks of ith student in jth subject etc).Find
the student wise totals, subject wise totals.
*/
#include<stdio.h>
struct student
{
    int subject_marks[5];
};

typedef student student;

int main()
{
    student register[5];
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            printf("enter the student[%d] in subject[%d] ",i,j);
            scanf("%d",&register[i].subject_marks[j]);
        }
    }
    return 0;
}