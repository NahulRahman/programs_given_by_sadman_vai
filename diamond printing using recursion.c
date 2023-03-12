#include <stdio.h>

void printMul(char a, int n) //' ', 0-4( 4ta space ) 1ta *
{
    for (int i = 0; i < n; i++)
        printf("%c ", a);
}

void printDiamond(int a, int b) // a=5, b=0
{
    printMul(' ', a - 1); // ' ', 4 ... ' ' ,0
    printMul('*', 2 * b + 1);  //*, 9
    printf("\n");
    if (a == 1)
        return;          // a=1,b=4...
    printDiamond(a - 1, b + 1);     //(1, 5) (2, 4)
    printMul(' ', a - 1);   /*(a=2, b=3)*/   /*(a=3, b=2)*/ /* a=4,b=1*//* a=5, b=0*/
    printMul('*', 2 * b + 1);
    printf("\n");
}

int main(void)
{
    int num;
    printf("Enter the number of rows: ");
    scanf("%d", &num); // n=5
    printDiamond(num, 0); // func call
}
