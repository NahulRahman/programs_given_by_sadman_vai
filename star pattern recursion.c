//star pattern recursion

#include<stdio.h>
void stars(int n){
    if(n==0) return;
    stars(n-1);
    printf("* ");
}

void lines(int n){
    if(n==0) return;
    lines(n-1);
    stars(n);
    printf("\n");
}

int main(){
    int n;
    scanf("%d",&n);
    lines(n);
}
