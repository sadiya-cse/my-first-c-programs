#include<stdio.h>
int main()
{
  int a,b;
  printf("Enter the number: ");
  scanf(" %d", &a);
  printf("Enter the number: ");
  scanf(" %d", &b);

  printf("Sum=%d\n", a+b);
  printf("Difference=%d\n", a-b);
  printf("Multiplication=%d\n", a*b);
  if(b !=0)
{ 
   printf("Division=%d\n", a/b);
}
return 0;
}
