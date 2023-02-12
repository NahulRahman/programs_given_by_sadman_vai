// practice problem file

#include<stdio.h>

struct dates
{
    int day;
    int month;
    int year;
};
struct student
{
    int roll;
    char name[100];
    struct dates date;
};


void compare(FILE *op, struct student a, struct student b )
{
    if(a.date.year>b.date.year) fprintf (op, "%d %s %d %d %d",a.roll,a.name,a.date.day,a.date.month, a.date.year);
    else if (a.date.year<b.date.year) fprintf (op, "%d %s %d %d %d",b.roll,b.name,b.date.day,b.date.month, b.date.year);
    else
    {
        if(a.date.month>b.date.month) fprintf (op, "%d %s %d %d %d",a.roll,a.name,a.date.day,a.date.month, a.date.year);
        else if (a.date.month<b.date.month) fprintf (op, "%d %s %d %d %d",b.roll,b.name,b.date.day,b.date.month, b.date.year);
        else
        {
            if(a.date.day>b.date.day) fprintf (op, "%d %s %d %d %d",a.roll,a.name,a.date.day,a.date.month, a.date.year);
        else if (a.date.day<b.date.day) fprintf (op, "%d %s %d %d %d",b.roll,b.name,b.date.day,b.date.month, b.date.year);
        else
        {
             fprintf (op, "%d %s %d %d %d",a.roll,a.name,a.date.day,a.date.month, a.date.year);
             fprintf (op, "%d %s %d %d %d",b.roll,b.name,b.date.day,b.date.month, b.date.year);

        }
        }
    }
}

int main()
{
    FILE *ip, *op;
    ip= fopen("student_input.txt", "r");
    op= fopen("student_output.txt", "w");

    int n;
    fscanf(ip, "%d", &n);
    struct student st[n];

    for(int i=0; i<n; i++)
    {
        fscanf(ip, "%d %s %d %d %d",&st[i].roll,st[i].name,&st[i].date.day,&st[i].date.month, &st[i].date.year);
    }
    int a,b;
    fscanf(ip,"%d %d", &a, &b);
    compare(op, st[a], st[b]);
    fclose(ip);
    fclose(op);

}
