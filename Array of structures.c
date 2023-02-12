// Array of structures

#include<stdio.h>

struct student{
    int id;
    char name[30];
    int age;
    char gender[6];
    float gpa;
};

int main(){
    struct student stud[2];
    for(int i=0; i<2; i++) {
        scanf("%d", &stud[i].id);
        getchar();
        gets(stud[i].name);
        scanf("%d", &stud[i].age);
        getchar();
        gets(stud[i].gender);
        scanf("%f", &stud[i].gpa);
    }
    for(int i=0; i<1; i++) {
        printf("%d", stud[i].id);
        puts(stud[i].name);
        printf("%d", stud[i].age );
        puts(stud[i].gender);
        printf("%f", stud[i].gpa);
    }

        return 0;
    }
