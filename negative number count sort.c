#include<stdio.h>
#include<stdlib.h>
void input(int a[], int i, int j)
{
    if(i==j) return;
    scanf("%d", &a[i]);
    input(a,i+1,j);

}

void print_array(int a[], int i, int j)
{
    if(i==j) return;
    printf("%d ", a[i]);
    print_array(a,i+1,j);

}

int setn(int a[], int p, int n, int k)
{
  for(int i=1; i<=n;i++) a[k++]=-p;
  return k;
}

int set(int a[], int p, int n, int k)
{
  for(int i=1; i<=n;i++) a[k++]=p;
  return k;
}
int main()
{
    int n;
    int nextindex=0;
    scanf("%d", &n);
    int a[n];
    input(a, 0, n);
    int freq[10];
    int freqneg[10];// frequency for k=9 is k+1
    for(int i=0; i<10;i++) freq[i]=0;
    for(int i=0; i<10;i++) freqneg[i]=0;

    for(int i=0; i<n;i++)
    {
       if(a[i]<0)
       {

        freqneg[-(a[i])]++;
       }

       else{
        freq[a[i]]++;
       }
    }

    print_array(freq,0,10);
    printf("\n");
    print_array(freqneg,0,10);

    for(int i=9; i>=0; i--)  nextindex=setn(a,i, freqneg[i], nextindex);

    for(int i=0; i<=9; i++)  nextindex=set(a,i, freq[i], nextindex);
    printf("\n");
    print_array(a,0,n);
}
