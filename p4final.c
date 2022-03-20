#include<stdio.h>
int input()
{
  int n;
  printf("enter the number");
  scanf("%d",&n);
  return n;
  }
int find_fibo(int n)
{
  int a=0,b=1,c=0;
  for(int i=2;i<n;i++)
    {
      c=a+b;
      a=b;
      b=c;
    }
  return c;
}
void output(int n,int fibo)
{
  printf("%d",fibo);
  
}
int main()
{
  int n,fi;
  n=input();
  fi=find_fibo(n);
  output(n,fi);
  return 0;
  }

