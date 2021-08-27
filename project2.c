#include<stdio.h>
int main()
{
  int a=30, b=15;
  printf("Before Swap a=%d b=%d",a,b);
  a=a+b; //a=45(15+30)
  b=a-b; //b=30(45-15)
  a=a-b  //a=15(45-30)
  printf("\nAfter Swap a=%d b=%d",a,b);
  return 0;
}
