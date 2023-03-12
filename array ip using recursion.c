#include <stdio.h>

void func(int ar[], int index, int size)
{
    //index=0++...size 10..
    if(index==size)
    {
        return;

    }
     scanf("%d", &ar[index]);
     func(ar, index+1, size);



}
void print(int ar[], int index, int size)
{
    //index=0++...size 10..
    if(index==size)
    {
        return;

    }
     printf("%d ", ar[index]);
     print(ar, index+1, size);
}
// array input using recursion

int main() {

    int n;
    scanf("%d", &n);
    int ar[n];

    func(ar, 0, n);
    print(ar, 0, n);


    return 0;
}
