#include<stdio.h>
#include<math.h>
void input_triangle(float *x1,float *y1, float *x2, float *y2, float *x3, float *y3)
{
  printf("enter the values for x1,x2,y1,y2,x3,y3\n");
  scanf("%f%f%f%f%f%f",x1,y1,x2,y2,x3,y3);
}
int distance(float x1,float y1,float x2,float y2)
{ 
float a,b,area;
  a=(y2-y1)*(y2-y1);
  b=(x2-x1)*(x2-x1);
  area=sqrtf(a+b);
  return area;
}

int is_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3)
{
  int istriangle=-1;
  float a,b,c;
  a=distance(*x1,*y1,*x2,*y2);
  b=distance(*x2,*y2,*x3,*y3);
  c=distance(*x3,*y3,*x1,*x2);
  if((a+b)>c && (b+c)>a && (c+a)>b)
    {
    istriangle=1;
    }
return istriangle;
}
void output(float *x1,float *y1,float *x2,float *y2,float *x3, float *y3, int istriangle)
{
  if(istriangle>0)
  {
    printf("it forms a triangle");}
  else{
    printf("doesn't forms a triangle");
 }
}
int main()
{
  float x1,y1,x2,y2,x3,y3;
  input_triangle(&x1,&y1,&x2,&y2,&x3,&y3);
  int result;
  result=is_triangle(&x1,&y1,&x2,&y2,&x3,&y3);
  output(&x1,&y1,&x2,&y2,&x3,&y3,result);
  return 0;
  }
  


