#include<stdio.h>
#include<math.h>
struct _point 
{
  float x,y;
};
typedef struct _point Point;
struct _line
{
  Point p1,p2;
  float distance;
};
typedef struct _line Line;
typedef struct Polygon
{
  int n;
  Line l[100];
  float perimeter;
}Polygon;

int input_n()
{
  int n;
  printf("Enter the number of sides: ");
  scanf("%d",&n);
  return n;
}
Line input_line()
{
  Line l;
  printf("Enter th coordinates of line:- ");
  scanf("%f %f",&l.p1.x,&l.p1.y);
  printf("Enter th coordinates of line:- ");
  scanf("%f %f",&l.p2.x,&l.p2.y);
  return l;
}
void input_polygon(Polygon *p)
{
  int i,n;
  printf("Enter the no of sides\n");
  scanf("%d",&p->n);
  for(i=0;i<p->n;i++)
  {
    p->l[i]=input_line();
  }
}
float find_distance(Point p1,Point p2)
{
  return sqrtf((p1.x-p2.x)*(p1.x-p2.x)+(p1.y-p2.y)*(p1.y-p2.y));
}
void find_length(Line *l)
{
  l->distance=find_distance(l->p1,l->p2);
}
void find_perimeter(Polygon *p)
{
  int i;
  p->perimeter=0;
  for(i=0;i<p->n;i++)
  {
    find_length(&p->l[i]);
    p->perimeter += p->l[i].distance;
  }
  
}
void output(Polygon p)
{
  printf("THE PERIMETER OF POLYGON IS %f \n",p.perimeter);
}

int main()
{
  Polygon p;
  input_polygon(&p);
  find_perimeter(&p);
  output(p);
  return 0;
}


