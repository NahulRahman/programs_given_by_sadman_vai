// declaring structure

#include<stdio.h>
struct student //tag name is student
{
    int id;
    char name[30];
    int age;
    char gender[6];
    float gpa;

}stud1, stud2; //also called instances

int main()
{
    struct student stud1; //stud1 called object
    scanf("%d", &stud1.id);
    printf("%d", stud1.id); //member access operator or dot operator
}
