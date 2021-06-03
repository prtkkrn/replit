#include<stdio.h>
int area(int length,int breadth)
{
  return length*breadth;
}
int perimeter(int length,int breadth)
{
  int p;
  p=2*(length+breadth);
  return p;
}
int main()
{
  int l,b;
  printf("Enter The length and breadth: \n");
  scanf("%d\n %d\n",&l,&b);
  int a=area(l,b);
  int p=perimeter(l,b);
  printf("%d\n %d\n",a,p);
  return 0;
}