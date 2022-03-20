#include <stdio.h>
#include <math.h>
int input_array_size()
{
  int x;
  printf("Till which number do you want prime numbers:- ");
  scanf("%d",&x);
  return x; //50
}
void init_array(int n,int a[n])
{
  for(int i=0;i<n;i++)
    a[i]=i;
  a[1]=0;
}
void erotosthenes_sieve(int n, int a[n])
{
  int i,j;
  for(i=2;i<n;i++)
    if(a[i]!=0)
      for(j=a[i]*a[i];j<=n;j=j+a[i])
        a[j]=0;
}
void out_put(int n, int a[n])
{
  for(int i=0;i<n;i++)
    if(a[i]!=0)
      printf("%d ",a[i]);
  printf("\n");
}
int main()
{
  int n;
  n=input_array_size();
  int a[n];
  init_array(n,a);
  erotosthenes_sieve(n,a);
  out_put(n,a);
  return 0;
}