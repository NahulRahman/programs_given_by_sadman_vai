#include<stdio.h>
#include<string.h>

int main()
{
    char a[1000],b[10000];

    int i,n,j,k,r[10000];

    scanf("%s %s",a,b);

    int l1=strlen(a);
    int l2=strlen(b);

    if(l1>=l2) n=l1;
    else n=l2;

    int t1,t2,carry=0;
    for( i=l1-1,j=l2-1,k=n-1 ; k>=0 ; i--,j--,k--)
    {
        if(i>=0) t1=a[i]-48;
        if(j>=0) t2=b[j]-48;

        r[k]=(t1+t2+carry)%10;

        carry=(t1+t2+carry)/10;

        t1=0;t2=0;
    }

    if(carry==0) for(i=0;i<n;i++) printf("%d",r[i]);

    else
        {
        printf("%d",carry);
        for(i=0;i<n;i++) printf("%d",r[i]);
        }
}
