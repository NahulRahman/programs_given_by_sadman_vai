#include<stdio.h>
#include<string.h>
int main()
{
    char c[20];
    char d[20];
    fgets(c,sizeof(c),stdin);
    fgets(d,sizeof(d),stdin);
    int a,b;
    int count=0;
    a=strlen(c);
    b=strlen(d);
    if(a!=b)
    {
        printf("not equal");
        return 0;
    }
    for(int i=0;i<a-1;i++)
    {
        if(c[i]!=d[i])
        {
            count=1;
            break;
        }
    }
    if(count=1)
    {
        printf("not equal");
    }
    else
    {
        printf("equal");
    }
}
