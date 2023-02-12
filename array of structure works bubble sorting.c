//array of structure works bubble sorting

#include<stdio.h>

void copy_string(char s1[], char s2[])
{
    int i;
    for( i=0; s1[i]!='\0';i++)
    {
        s1[i]=s2[i];
    }
    s1[i]= '\0';
}
struct student {
    char name[100];
    int id;
    int age;
    };
int main() {
    printf("No. of students:");
    int n;
    scanf("%d", &n);
    getchar();
    struct student std [n];
    for(int i = 0; i < n; i++){
        gets(std[i].name);
        scanf("%d",&std[i].id);
        scanf("%d",&std[i].age);
        getchar();
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            if(std[j].age>std[j+1].age){
                int temp_age= std[j].age;
                int temp_id= std[j].id;
                char temp_name[100];
                copy_string(temp_name, std[j].name );
                std[j].age=std[j+1].age;
                std[j].id=std[j+1].id;
                copy_string(std[j].name, std[j+1].name);
                std[j+1].age= temp_age;
                std[j+1].id= temp_id;
                copy_string(std[j+1].name,temp_name);
            }
        }
    }
    for(int i = 0; i < n; i++){
        printf("Student %d:\n", i+1);
        puts(std[i].name);
        printf("%d\n", std[i].id);
        printf("%d\n", std[i].age);
    }
}
