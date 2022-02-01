#include<stdio.h>
int input()
{
  int n;
  printf("enter a number");
  scanf("%d",&n);
  return n;
}
int comp(int a,int b,int c)
{
  if((a>b)&&(a>c))
  return a;
  else if (b>c)
  return b;
  else 
  return c;
}
int output(int large)
{
  printf("the largest number is %d",large);
}
int main()
{
  int x,y,z,large;
  x=input();
  y=input();
  z=input();
  large=comp(x,y,z);
  output(large);
  return 0;
}