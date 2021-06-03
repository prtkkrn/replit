#include<stdio.h>
int main()
{
  int length=0,breadth=0;
  printf("Enter Length and Breadth");
  scanf("%d\n %d",&length,&breadth);
  int area=length*breadth;
  int perimeter=2*(length+breadth);
  printf("Area=%d\n perimeter=%d\n",area,perimeter);
  return 0;
}
