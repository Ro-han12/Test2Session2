// . is the member of a structure
// -> is the member of a POINTED TO structure
// So the . is used when there is a direct access to a variable in the structure. But the -> is used when you are accessing a variable of a structure through a pointer to that structure.

#include <stdio.h>
#include <math.h>

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

Point input_point()
{
  Point p;
  printf("Enter p1 coordinates(x,y)");
  scanf("%f %f",&p.x,&p.y);
  return p;
}

Line input_line()
{
  Line l;
  l.p1=input_point();
  l.p2=input_point();
  return l;
}

void find_length(Line *l)
{
  l->distance=sqrtf(pow(l->p2.x - l->p1.x,2)+pow(l->p2.y - l->p1.y,2));
}

void output(Line l)
{
  printf("Length of line is %.2f",l.distance);
}

int main()
{
  Line l; //a[10]
  l=input_line();
  find_length(&l);
  output(l);
  return 0;
}
.