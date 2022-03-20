#include<stdio.h>
int input_number()
{
  int n;
  printf("enter a number\n");
  scanf("%d",&n);
  return n;
}
int is_prime(int n)
{
  int a=-1;
  for(int i=2;i<n/2;i++)
    {
      if(n%i==0)
      {
        return a=1;
      }
    }
  return a;
}
void output(int n, int is_prime)
{
  if (is_prime>0)
  {
    printf("%d not a prime number",n);
    }
  else
  {
    printf("%d is prime number",n);
    }
}
int main()
{
  int n;
  n=input_number();
  int res=is_prime(n);
  output(n,res);
  return 0;
}
.