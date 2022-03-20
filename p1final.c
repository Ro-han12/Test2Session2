#include <stdio.h>
#include <math.h>
void input(float *x1,float *y1,float *x2,float *y2)
{
  printf("Enter the x1 , y1,x2,y2\n");
  scanf("%f %f %f %f",x1,y1,x2,y2);
}

void distance(float x1,float y1,float x2,float y2,float *area)
{ 
float a,b;
  a=(y2-y1)*(y2-y1);
  b=(x2-x1)*(x2-x1);
  *area=sqrtf(a+b);
  
}

void output(float x1,float y1,float x2,float y2,float area)
{
  printf("The distance between the points x1= %f and y1= %f and x2=%f and y2=%f",x1,y1,x2,y2);
  printf("is %f",area);
}

int main()
{
  float x1,x2,y1,y2,area;
  input(&x1,&y1,&x2,&y2);
  distance(x1,y1,x2,y2,&area);
  output(x1,y1,x2,y2,area);
  return 0;
}
