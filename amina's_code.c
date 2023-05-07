#include <stdio.h>

int main(){

double x[]={16.0,12.0,6.0,8.0,2.5,12.0,14.0,-54.5};
int i=5;
printf("%d%.lf\n",4,x[4]);
printf("%d%.lf\n",i,x[i]);
printf("%.lf\n",x[i]+1);
printf("%.lf\n",x[i]+i);
printf("%.lf\n",x[i+1]);
printf("%.lf\n",x[i+i]);
printf("%.lf\n",x[(int)x[4]]);
printf("%.lf\n",x[--i]);

    return(0);
}
