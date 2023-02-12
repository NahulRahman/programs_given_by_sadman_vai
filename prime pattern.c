//prime pattern

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int d=2;
        for(int j=1;j<=i;){
            int f=1;
            for(int k=2;k<d;k++){
                if(d%k==0){
                    f=0;
                    break;
                }
            }if(f==1){
                printf("%d ",d);
                j++;
            }d++;
        }printf("\n");
    }return 0;
}

