// printing structure members of different varaibles using function

#include<stdio.h>
struct student
{
    int id;
    char name[30];
    int age;
    char gender[6];
    float gpa;

}; //also called instances

void print_struct(struct student var)
{
    printf("%d\n",var.id);
    puts(var.name);
    printf("%d\n", var.age);
    puts(var.gender);
    printf("%.2f\n", var.gpa);
}

int main()
{
    struct student stud1 ={5747, "Sadman", 19, "male", 3.25};
    print_struct(stud1);
    struct student stud2 ={5790, "Fardin", 19, "female", 3.67};
    print_struct(stud2);
}
